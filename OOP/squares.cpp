#include <iostream>
using namespace std;

class Computation;

class Number {
private:
    float a, b, c;  

public:
    Number(float x = 0, float y = 0, float z = 0) {
        a = x;
        b = y;
        c = z;
    }

    friend class Computation;
    friend void display(const Number &num);
};

void display(const Number &num) {
    cout << "a = " << num.a << ", b = " << num.b << ", c = " << num.c << endl;
}

class Computation {
public:
    float squareOfSums(const Number &num) {
        return num.a * num.a + num.b * num.b + num.c * num.c
             + 2 * num.a * num.b + 2 * num.b * num.c + 2 * num.c * num.a;
    }

    float squareOfDifference(const Number &num) {
        return num.a * num.a + num.b * num.b + num.c * num.c
             - 2 * num.a * num.b - 2 * num.b * num.c + 2 * num.c * num.a;
    }

    float mean(const Number &num) {
        return (num.a + num.b + num.c) / 3.0;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg no: 25-CS-59" << endl;

    float x, y, z;

    cout << "Enter first number: ";
    cin >> x;

    cout << "Enter second number: ";
    cin >> y;

    cout << "Enter third number: ";
    cin >> z;

    Number num(x, y, z);

    cout << "\nNumbers:" << endl;
    display(num);

    Computation comp;

    cout << "Square of sums: " << comp.squareOfSums(num) << endl;
    cout << "Square of difference: " << comp.squareOfDifference(num) << endl;
    cout << "Mean: " << comp.mean(num) << endl;

    return 0;
}