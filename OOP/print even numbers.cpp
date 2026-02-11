#include <iostream>
using namespace std;

class EvenNumbers {
public:
    void display() {
        cout << "Even numbers from 1 to 100 are:" << endl;
        for (int i = 1; i <= 100; i++) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
        }
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    EvenNumbers obj;
    obj.display();

    return 0;
}
