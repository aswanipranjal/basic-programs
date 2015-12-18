from sys import exit

def dead(why):
    print why + "booohooo"
    exit(0)

def start():
    global sack
    global inventory 
    inventory = []
    i=0
    print "Hello great warrior!\n Take 2 out of the four items listed below!"
    print "1. sword"
    print "2. potion"
    print "3. rope"
    print "4. meat"
    while i<2:
        temp = raw_input("> ")
        inventory.append(temp) 
        i +=1
    print " You enter a room, you can go left, right, or straight."
    print "where do you go?"
    choice = raw_input("> ")
    
    if choice == "left":
        key_room()
    elif choice == "right":
        diamond_room()
    elif choice == "straight":
        straight_room()
    else:
        dead("you can't do shit!")

def straight_room():
    global sack
    sack = " "
    gate()
    
def key_room():
    global sack
    print "\nwelcome to the key room, what do you seek?"
    key = raw_input("> ")
    if key=="key":
        sack = "key"
        print " Congratulations you have got the key, you can go to the gate!"
        print " type, ' i am a geek ' to continue"
        press1 = raw_input("> ")
        if press1 == "i am a geek":
            gate()
        else:
            exit(0)
    else:
        print "\nthis is where  you had to type 'key'"
        key_room()

def diamond_room():
    global sack 
    sack = "diamond"
    print "You choose wisely, you bypass the gate"
    print "You have a diamond in your sack now!"
    print "are you ready to face the mighty Falcon?"
    answer = raw_input("> ")
    if answer == "yes":
        falcon()
    else:
        exit(0)

def gate():
    if sack == "key":
        print "open the gate and proceed, the mighty Falcon awaits you!!"
        falcon()
    else:
        print " You require a key to open the door!"
        print " Go and get it"
        key_room()

def falcon():
    i = 0
    print "\nFALCON: so you are the great warrior, you look so puny!"
    print "\nFALCON: Do you have anything to offer, that could finish my hunger?"
    answer = raw_input("\nMaster craves meat, do you have any? " )
    if answer == "yes":
        for i in inventory:
            if i == "meat":
                print "The falcon is pleased by your offering of meat!"
                print "meet the grimm in the next room"
                grimm()
            else:
                print "\nFALCON: you lied to my face bitch! you die!!"
                dead("\nFALCON: you will taste good though.")
    else:
        print "i would have loved some meat."
        dead("I'll kill you and eat you instead!")   

def grimm():
    print " Hello! you survived the Falcon. "
    print " i want something shiny! give me the diamond, or die!"
    if sack == "diamond":
        print " i likey the diamond"
        print " now meet my cousin!! hahahaha"
        mummy_room() 
    else:
        print " You will die in quick sand"
        quick_sand()

def quick_sand():
    i = 0
    print " you'll die slowly!!"
    for i in inventory:
        if i == "rope":
            print " oh no! you have the rope, you live!"
            print " Start over."
            start()
        else:
            dead("no one can save you")

def mummy_room():
    i = 0
    print " duhhhhhhh..."
    print " i gonna kill you"
    print " i gonna kill everybady"
    print " i want the potion!!"
    for i in inventory:
        if i == "potion":
            print "aaahhhhhh!"
            print " YOU WIN!!!"
            exit(0)
        else:
            print "you do now posess the potion"
            print " fight with me"
            for i in inventory:
                if i == "sword":
                    print " this no happen"
                    print " You have slayed the 5000 year ols mummy!"
                    print " YOU WIN"
                else:
                    dead("I'll have fun eating you")

start()
            
            

    
   


      