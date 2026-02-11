#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    string dob;
    string address;
    string designation;
    string joiningDate;
    double salary;
    string contact;
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    Employee emp[10];
    int i;

    cout << "Enter details for 10 employees (Press Q to quit anytime):" << endl;

    for (i = 0; i < 10; i++) {
        string temp;
        cout << "\nEmployee " << i + 1 << " ID: ";
        cin >> temp;
        if (temp == "Q" || temp == "q") break;
        emp[i].id = stoi(temp);

        cin.ignore(); 

        cout << "Name: ";
        getline(cin, emp[i].name);
        if (emp[i].name == "Q" || emp[i].name == "q") break;

        cout << "D.O.B: ";
        getline(cin, emp[i].dob);
        if (emp[i].dob == "Q" || emp[i].dob == "q") break;

        cout << "Address: ";
        getline(cin, emp[i].address);
        if (emp[i].address == "Q" || emp[i].address == "q") break;

        cout << "Designation: ";
        getline(cin, emp[i].designation);
        if (emp[i].designation == "Q" || emp[i].designation == "q") break;

        cout << "Joining Date: ";
        getline(cin, emp[i].joiningDate);
        if (emp[i].joiningDate == "Q" || emp[i].joiningDate == "q") break;

        cout << "Salary: ";
        string salaryInput;
        getline(cin, salaryInput);
        if (salaryInput == "Q" || salaryInput == "q") break;
        emp[i].salary = stod(salaryInput);

        cout << "Contact Info: ";
        getline(cin, emp[i].contact);
        if (emp[i].contact == "Q" || emp[i].contact == "q") break;
    }

    while (true) {
        string search;
        cout << "\nEnter Employee ID to search (Press Q to quit): ";
        cin >> search;
        if (search == "Q" || search == "q") break;

        int searchId = stoi(search);
        bool found = false;

        for (int j = 0; j < i; j++) {
            if (emp[j].id == searchId) {
                cout << "\nEmployee Found:" << endl;
                cout << "ID: " << emp[j].id << endl;
                cout << "Name: " << emp[j].name << endl;
                cout << "D.O.B: " << emp[j].dob << endl;
                cout << "Address: " << emp[j].address << endl;
                cout << "Designation: " << emp[j].designation << endl;
                cout << "Joining Date: " << emp[j].joiningDate << endl;
                cout << "Salary: " << emp[j].salary << endl;
                cout << "Contact Info: " << emp[j].contact << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            cout << 67 << endl;
        }
    }

    return 0;
}
