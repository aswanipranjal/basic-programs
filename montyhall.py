from random import randint
from sys import exit

door = [1,2,3]

def get_car(door):
	return	randint(1,3)
goat = door[:]
switch = True
wins = 0
i = 0
def start(door):
    i = 0
    wins = 0
    switch = True
	while i <100:
		car = get_car(door)
		goat.remove(car)
		print "computer will choose the door "
		choice = randint(1,3)
		if choice == car:
			print "the door no. %d contains a goat" % randint(*goat)
			if switch:
				print "oops you loose"
			else:
				print "good job! you win"
				wins+=1

		else:
			if choice == goat[0]:
				print "the door %d contains a goat" % goat[1]
				print "do you wish to switch?"
				switch = raw_input("choose: ")
				if switch == "yes":
					print "you win the car"
					wins+=1
				else:
					print "you loose"
				
			else :
				print "the door %d contains a goat" % goat[0]
				print " do you wish to switch?"
				switch = raw_input("choose: ")
				if switch == "yes":
					print "you win the car"
					wins+=1
				else:
					print "you loose"
	i+=1		
	print "probability of winning if we always switch is" , float(wins)/100


start(door)	 
