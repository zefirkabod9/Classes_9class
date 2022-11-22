#include "Car.h"
#include "Phone.h"
#include "Human.h"

int main() {
    /*Phone p1 = Phone("iPhone", "13 PRO MAX", 10, 1024, 50, 12);
    p1.info();
    p1.call();
    p1.photo();
    p1.power_state();
    p1.call();
    p1.photo();*/
    Human h1 = Human("Armix", "Klymenko", 14, 205.4, 50.6);
    //h1.switchSleep();
    h1.eat();
    h1.walk();
    h1.phoneCall();
    return 0;
}