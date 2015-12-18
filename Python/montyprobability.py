from random import randint
from sys import exit

door = [1,2,3]

def get_car(door):
	return  randint(1,3)


def start(door):
	i = 0
	switch = True
	wins = 0
	loses = 0
	while i <10000:
		goat = door[:]
		car = get_car(door)
		goat.remove(car)
		choice = randint(1,3)
		if choice == car:
			if switch:
				loses +=1
			else:
				wins += 1
		else:
			if choice == goat[0]:
				if switch:
					wins += 1
				else:
					loses +=1
			else :
				if switch:
					wins += 1
				else:
					loses += 1
		i +=1
	print "probability of winning", float(wins)/10000
	print "probability of loosing", float(loses)/10000


start(door)   