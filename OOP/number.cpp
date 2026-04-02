#include <iostream>
using namespace std;

class Number {
private:
    float num;
    int result;

public:
    void setNumber(float n) {
        num = n;
        result = 1;
    }

    bool isWholeNumber() {
        return num == (int)num;
    }

    bool isPositive() {
        return num >= 0;
    }

    void calculateFactorial() {
        if (isWholeNumber() && isPositive()) {
            result = 1;
            for (int i = 1; i <= (int)num; i++) {
                result *= i;
            }
        }
    }

    void displayResult() {
        cout << "\nDua Zahra\n25-CS-59\n";
        if (isWholeNumber() && isPositive()) {
            cout << "Number = " << num << endl;
            cout << "Factorial = " << result << endl;
        } else {
            cout << "Factorial cannot be determined for " << num << endl;
        }
    }
};

int main() {
    Number n;
    float num;

    cout << "Enter Number: ";
    cin >> num;

    n.setNumber(num);
    n.calculateFactorial();
    n.displayResult();

    return 0;
}