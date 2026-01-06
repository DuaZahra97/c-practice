#include<iostream>
using namespace std;

int main()
{
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    int day, month, totalDays = 0;
    int daysInMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month (1-12): ";
    cin >> month;

    if(month < 1 || month > 12)
    {
        cout << "Invalid month!" << endl;
        return 1;
    }

    if(day < 1 || day > daysInMonth[month-1])
    {
        cout << "Invalid day for the given month!" << endl;
        return 1;
    }

    for(int i = 0; i < month-1; i++)
    {
        totalDays += daysInMonth[i];
    }
    totalDays += day;

    cout << "Number of days till now = " << totalDays << endl;

    return 0;
}