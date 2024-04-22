#include <iostream>
#include <cmath>

using namespace std;

void task_1() {
	int year;
	cin >> year;
	cout << 365 + (((year % 100 != 0) || (year % 400 == 0))) << " days";
}

void task_2() {
	int grn, cop;
	cin >> grn >> cop;
	cout << "You have " << grn + cop / 100 << "grn and " << cop % 100 << "cop" << endl;
}

void task_3() {
	cout << "Calculation of the volume of the parallelepiped." << endl;
	cout << "Enter the output data:" << endl;
	cout << "Lenth (cm) -> ";
	double len, width, height;
	cin >> len;
	cout << "Width (cm) -> ";
	cin >> width;
	cout << "Height (cm) -> ";
	cin >> height;
	cout << "Volume: " << len * width * height << " cm3" << endl;
}

void task_4() {
	cout << "Calculation of the distance between settlements. \nEnter the output data: " << endl;
	cout << "Map scale(number of kilometers in one centimeter) -> ";
	double len, l;
	cin >> len;
	cout << "Distance between points representing settlements (cm) -> ";
	cin >> l;
	cout << "Distance between settlements " << len * l << " km" << endl;
}

void task_5() {
	double pi = 3.14, R;
	cin >> R;
	cout << (4 / 3) * pi * pow(R, 3) << endl;
}

int main() {
	//cout << "Task 1" << endl;
	task_1();
	//cout << "Task 2" << endl;
	//task_2();
	//cout << "Task 3" << endl;
	//task_3();
	//cout << "Task 4" << endl;
	//task_4();
	//cout << "Task 5" << endl;
	//task_5();
}