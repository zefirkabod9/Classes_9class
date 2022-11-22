#include <iostream>

using namespace std;

class Phone {
    private:
        bool on_off = false;

        bool check_on() {
            if (!on_off) {
                cout << "Your phone is off!" << endl;
                return false;
            }
            else return true;
        }
    public:
        string name;
        string model;
        int RAM;
        int ROM;
        int mainCameraResolution;
        int secondCameraResolution;

        Phone(string name, string model, int RAM, int ROM, int mainCameraResolution, int secondCameraResolution) {
            this->name = name;
            this->model = model;
            this->RAM = RAM;
            this->ROM = ROM;
            this->mainCameraResolution = mainCameraResolution;
            this->secondCameraResolution = secondCameraResolution;
        }
        void power_state() {
            on_off = !on_off;
        }
        void call() {
            if (check_on()) cout << "Call!" << endl;
        }
        void photo() {
            if (check_on()) cout << "Take a photo!" << endl;
        }
        void info() {
            cout << "\nPower: " << on_off << "\nName: " << name << "\nModel: " << model << "\nRAM: " << RAM << "\nROM: " << ROM << "\nMain camera: " << mainCameraResolution << "\nSecond camera: " << secondCameraResolution << endl;
        }
};
