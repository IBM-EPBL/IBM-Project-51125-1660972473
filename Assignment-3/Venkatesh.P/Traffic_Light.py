from gpiozero import LED
from time import sleep


red= LED(17)                      #pin numbers connected to Led's
aster=(22)
green=(27)


while True:
    red.on()                      #RED light
    print("Red light is ON")
    for i in range(100,0,-1):
        print("Remaining time: ",i)
        sleep(1)
    red.off()

    aster.on()                   # ASTER light
    print("Yellow light is ON")
    for i in range(5,0,-1):
        print("Remaining time: ",i)
        sleep(1)
    aster.off()

    green.on                     #GREEN light
    print("Green light is ON")
    for i in range(30,0,-1):
        print("Remaining time: ",i)
        sleep(1)
    green.off()
