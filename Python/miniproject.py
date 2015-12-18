import psycopg2
from flask import Flask, jsonify, make_response, request

app = Flask(__name__)

conn = psycopg2.connect(database="miniproject", user="rahulaswani")
cur = conn.cursor()

@app.route("/")
def index():
	return 'Hello!\nWelcome to the coupon code dispencer 555 '

@app.errorhandler(404)
def not_found(error):
    return make_response(jsonify({'error': 'Not found'}), 404)

@app.route('/menu')
def menu():
	cur.execute("Select * from coupons;")
	rows = cur.fetchall()
	dict = {}
	ls = []
	i=0
	for row in rows:
		if i == 2:
			pass
		else:
			dict = {'id':str(row[0]),'type':str(row[1]),'last updated':str(row[2])}
			ls.append(dict)
		i+=1
	return jsonify(results = ls)

def get_number_by_name(name):
	ls = {'food':1,'travel':2,'payments':3,'recharge':3,'upcommingevents':5,'personalcare':6,'onlineshopping':7,'homeservices':8,'shopping':7,'spa':6,'salon':6,
	'groceries':8}
	return ls[name]

@app.route('/type/<name>')
def get_service_by_name(name):
	ls = get_number_by_name(name)
	cur.execute("Select * from services where id=%s",(ls,))
	dict = {}
	rows = cur.fetchall()
	ls = []
	for row in rows:
		dict = {"coupon: ":str(row[1]),"available on ":str(row[2]),"provides ":str(row[3])}
		ls.append(dict)
	return jsonify(results = ls)

@app.route('/ByDate/<date>')
def get_codes_before_date(date):
	cur.execute("select company_name,code, terms, expiry, valid_on from services as s, couponcodes  as c where s.service_id = c.service_id and expiry<%s",(date,))
	rows = cur.fetchall()
	dict = {}
	ls = []
	for row in rows:
		dict ={
		"coupon for": str(row[0]),
		"code ":str(row[1]),
		"terms: ":str(row[2]),
		"expiry: ":str(row[3]),
		"user :":str(row[4])
		}
		ls.append(dict)
	return jsonify(results = ls)
		
def service_to_id(service):
	ls = {'Ola':21,'Uber':22,'Zomato':13,'Groffers':15,'Goibibo':23,'Goibibo':23,'MakeMyTrip':24,'RedBus':26,
	'Paytm':31,'Freecharge':32,'Jabong':71,'Ziffi':61,'Little':62,'Dominoes':16,
	'Fassos':17,'myntra':74,'Myntra':74,'Woohoo':73,'TinyOwl':11,'FoodPanda':12,'Doormint':81,
	'TaskBob':82,'LocalOye':83}
	return ls[service]

@app.route('/service/<sname>')
def get_coupon_by_service(sname):
	ls = service_to_id(sname)
	cur.execute("select * from couponcodes where service_id = %s",(ls,))
	rows = cur.fetchall()
	dict = {}
	ls = []
	for row in rows:
		dict = {
		"code ":str(row[2]),
		"terms ":str(row[3]),
		"expiry ":str(row[4]), 
		"user ":str(row[5])
		}
		ls.append(dict)
	return jsonify(results = ls)

@app.route('/competitions')
def competitions():
	cur.execute("select event_name,competition_link from events as e, competitions as c where e.event_id=c.event_id;")
	rows = cur.fetchall()
	ls = []
	dict ={}
	for row in rows:
		dict['event name']=row[0]
		dict['link']=row[1]
		ls.append(dict)
	return jsonify(results=ls)

def get_city_num(city):
	dict = {'Mumbai':1,"Delhi":2,"Goa":3,"Hyderabad":4,"Bangaluru":5,"Pune":6}
	return dict[city]

@app.route('/events/<city>')
def get_events(city):
	ls = get_city_num(city)
	cur.execute("select * from events where city_id = %s",(ls,))
	rows = cur.fetchall()
	ld = []
	dict = {}
	for row in rows:
		dict={'event name:':str(row[1]),'Type':str(row[2]),
		'Date':str(row[3]),
		'place':str(row[5]),
		'tickets available on':str(row[4])}
		ld.append(dict)
	return jsonify(results = ld)

if __name__=='__main__':
	app.run(debug = True)


