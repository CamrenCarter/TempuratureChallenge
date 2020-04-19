//Tempurature Challenge
//Author: Camren Carter
//Date: 4/18/2020

#include<iostream>
#include<string>
#include<cctype>
using namespace std;

void Celsius() {
	double temp1, temp2, temp3;
	double eight, twelve, five;

	cout << "You chose Celsius\n";
	cout << "Please enter the tempurature in Celsius at 8:00am: \n";
	cin >> temp1;

	cout << "Please enter the tempurature in Celsius at 12:00pm: \n";
	cin >> temp2;

	cout << "Please enter the tempurature in Celsius at 5:00pm: \n";
	cin >> temp3;

	eight = (temp1 * 9 / 5) + 32;
	twelve = (temp2 * 9 / 5) + 32;
	five = (temp3 * 9 / 5) + 32;

	cout << "The converted tempurature at 8:00am is: " << eight << " degrees fahrenheit, \n at 12:00pm is: " << twelve
		<< " degrees fahrenheit, \n and at 5:00pm is: " << five << " degrees fahrenheit\n";


}
void fahrenheit() {
	double temp1, temp2, temp3;
	double eight, twelve, five;

	cout << "You chose Fahrenheit\n";
	cout << "Please enter the tempurature in Fahrenheit at 8:00am: \n";
	cin >> temp1;

	cout << "Please enter the tempurature in Fahrenheit at 12:00pm: \n";
	cin >> temp2;

	cout << "Please enter the tempurature in Fahrenheit at 5:00pm: \n";
	cin >> temp3;

	eight = (temp1 - 32) * 5 / 9;
	twelve = (temp2 - 32) * 5 / 9;
	five = (temp3 - 32) * 5 / 9; 

	cout << "The converted tempurature at 8:00am is: " << eight << " degrees celsius, \n at 12:00pm is: " << twelve
		<< " degrees celsius, \n and at 5:00pm is: " << five << " degrees celsius\n";

}

int main(){

	int x = 0;
	int input;


	do {
		cout << "Are you converting Celsius[1] or Fahrenheit[2]: " ;
		cin >> input;

		if (input == 1) {
			Celsius();
			x++;
		}
		else if (input == 2) {
			fahrenheit();
			x++;
		}
		else {
			cout << "ERROR!!! Please choose 1 or 2\n";
			
		}
	}
	 while (x == 0);
	system("Pause");
	return 0;



}
