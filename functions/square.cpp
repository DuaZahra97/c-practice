#include <iostream>
using namespace std;

void calculate(double num1, double num2, char op) {
    double result;
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result = " << result << endl;
            break;
        case '/':
            if(num2 == 0)
                cout << "Error! Division by zero." << endl;
            else {
                result = num1 / num2;
                cout << "Result = " << result << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl << endl;

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    calculate(num1, num2, op);

    return 0;
}

