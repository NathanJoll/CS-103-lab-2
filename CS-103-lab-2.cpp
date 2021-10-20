// CS-103-lab-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void myLine(int n);
void paySlip();
void weekReportOutput();

int main()
{
	string start, stop, a, b, c, d, e, f, g, h, i, j, k;
	int l, m, n;

	cout << "Enter Week Start Date : ";
	cin >> start;
	cout << "Enter Week End Date : ";
	cin >> stop;

	myLine(50);

	cout << "\nEnter information for Employee #1" << endl;

	myLine(50);

	cout << "Enter Employee ID : ";
	cin >> a;
	cout << "Enter First Name : ";
	cin >> b;
	cout << "Enter Middle Initials : ";
	cin >> c;
	cout << "EnterLast Name : ";
	cin >> d;
	cout << "Enter Street Address : ";
	cin >> e;
	cout << "Enter Suburb : ";
	cin >> f;
	cout << "Enter City : ";
	cin >> g;
	cout << "Enter Contact Number : ";
	cin >> h;
	cout << "Enter Email Adress : ";
	cin >> i;
	cout << "Enter IRD Number : ";
	cin >> j;
	cout << "Enter Tax Code : ";
	cin >> k;
	cout << "Enter Hours Worked : ";
	cin >> l;
	cout << "Enter Hourly Rate : ";
	cin >> m;
	cout << "Enter Tax Rate : ";
	cin >> n;

}

void myLine(int n) {
	cout << endl;
	int i;
	for (i = 0; i < n; i++) {
		cout << "*";
	}
	cout << endl;
}

void paySlip(){}

void weekReportOutput(){}