#include <iostream>
using namespace std;

struct Student {
    string name;
    string fatherName;
    int age;
    string phone;
};

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    Student s[6];

    for (int i = 0; i < 6; i++) {
        cout << "\nEnter details of student " << i + 1 << endl;

        cin.ignore();
        cout << "Student Name: ";
        getline(cin, s[i].name);

        cout << "Father Name: ";
        getline(cin, s[i].fatherName);

        cout << "Age: ";
        cin >> s[i].age;

        cout << "Phone No: ";
        cin >> s[i].phone;
    }

    cout << "\n----- Displaying Student Data -----\n";

    for (int i = 0; i < 6; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Father Name: " << s[i].fatherName << endl;
        cout << "Age: " << s[i].age << endl;
        cout << "Phone No: " << s[i].phone << endl;
    }

    return 0;
}
