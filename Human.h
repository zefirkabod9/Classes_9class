#include <iostream>

using namespace std;

class Human {
	private:
		bool male;
		bool sleep;
		bool checkSleep() {
			if (sleep){
				cout << "\nYou are sleep!";
				return false;
			}
			else return true;
		}
	public:
		string name;
		string surname;
		int age;
		double hight;
		double weight;

		/*void changeMale() {
			male = !male;
		}*/
		Human() {
			sleep = false;
		}
		Human(string name, string surname, int age, double hight, double weight) {
			sleep = false;
			this->name = name;
			this->surname = surname;
			this->age = age;
			this->hight = hight;
			this->weight = weight;
		}
		
		void switchSleep() {
			sleep = !sleep;
		}
		
		void walk() {
			if (checkSleep()) cout << "\nNow you walking!";
		}
		void eat() {
			if (checkSleep()) cout << "\nNow you eating!";
		}
		void run() {
			if (checkSleep()) cout << "\nNow you runing!";
		}
		void phoneCall() {
			cout << "\nCalling!";
		}
};

