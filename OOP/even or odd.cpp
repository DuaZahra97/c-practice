#include <iostream>
using namespace std;

class EvenOdd {
private:
    int number;

public:
    void input() {
        cout << "Enter an integer: ";
        cin >> number;
    }

    void check() {
        if (number % 2 == 0)
            cout << "The number is EVEN." << endl;
        else
            cout << "The number is ODD." << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    EvenOdd obj;
    obj.input();
    obj.check();

    return 0;
}
