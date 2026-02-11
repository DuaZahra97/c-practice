#include <iostream>
using namespace std;

class AgeGroup {
private:
    int persons;
    int age;
    int count;

public:
    void inputAndCount() {
        cout << "Enter number of persons: ";
        cin >> persons;

        count = 0;

        for (int i = 1; i <= persons; i++) {
            cout << "Enter age of person " << i << ": ";
            cin >> age;

            if (age >= 50 && age <= 60) {
                count++;
            }
        }
    }

    void display() {
        cout << "Number of persons between age 50 and 60: " << count << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    AgeGroup obj;
    obj.inputAndCount();
    obj.display();

    return 0;
}
