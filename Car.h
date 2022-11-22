#include <iostream>

using namespace std;

class Car
{
    public:
        string name;
        string model;
        string color;
        double motor_value;
        int max_speed;
        int power_0_100;
    public:
        Car(string name, string model, string color, double motor_value, int max_speed, int power_0_100) {
            this->name = name;
            this->model = model;
            this->color = color;
            this->motor_value = motor_value;
            this->max_speed = max_speed;
            this->power_0_100 = power_0_100;
        }
        Car() {}
        void drive() {
            cout << "\nNow we driving!";
        }
        bool signal_(bool beep) {
            return beep;
        }
        void window(int i) {
            int up_down = 0;
            if (i == 1) up_down = 1 - up_down;
            if (up_down == 1) cout << "Window is open" << endl;
            if (up_down == 0) cout << "Window is close" << endl;
        }
        void info() {
            cout << "Name: " << name << "\nModel: " << model << "\nColor: " << color << "\nMotor value: " << motor_value << "\nMax Speed: " << max_speed << "\nPower: " << power_0_100;
        }
};

