#include <iostream>
using namespace std;
struct Student 
{
    string name;
    int marks1;
    int marks2;
    int marks3;
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Student s;
    int total;

    cout << "Enter student name: ";
    getline(cin, s.name);

    cout << "Enter marks of Mathematics: ";
    cin >> s.marks1;

    cout << "Enter marks of Physics: ";
    cin >> s.marks2;

    cout << "Enter marks of Chemistry: ";
    cin >> s.marks3;

    total = s.marks1 + s.marks2 + s.marks3;

    cout << "\nStudent Name: " << s.name << endl;
    cout << "Mathematics: " << s.marks1 << endl;
    cout << "Physics: " << s.marks2 << endl;
    cout << "Chemistry: " << s.marks3 << endl;
    cout << "Total Marks: " << total << endl;

    return 0;
}