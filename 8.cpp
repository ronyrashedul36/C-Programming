/*
an employee's total weekly pay is calculated by multiplying the hourly wage and number of regular hours plus any overtime pay which in turn is calculated as total overtime hours multiplied by 1.5 times the hourly wage. Write a program that takes as inputs the hourly wage, total regular hours and total overtime hours and prints an employee's total weekly pay.
*/
#include<bits/stdc++.h>

using namespace std;

int main()

{
    double hourlyWage, regularHours, overtimeHours;
    double totalPay;
    cout << "Enter hourly wage: ";
    cin >> hourlyWage;

    cout << "Enter total regular hours: ";
    cin >> regularHours;

    cout <<"Enter total overtime hours: ";
    cin >> overtimeHours;

    totalPay = (hourlyWage * regularHours) + (overtimeHours * 1.5 * hourlyWage);

    cout << "Total weekly pay: $" << totalPay << endl;

    return 0;
}
