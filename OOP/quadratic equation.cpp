#include <iostream>
#include <cmath>
using namespace std;

class equation
{
    int a, b, c;
    float proot, nroot;

public:
    equation()
    {
        a = 0;
        b = 0;
        c = 0;
        proot = 0;
        nroot = 0;
    }

    void setcoefficients(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    friend bool calculateroots(equation &eq);
    friend void displayroots(equation eq);
};

bool calculateroots(equation &eq)
{
    if (eq.a == 0)
    {
        cout << "This is not a quadratic equation." << endl;
        return false;
    }

    float discriminant = (eq.b * eq.b) - (4 * eq.a * eq.c);

    if (discriminant < 0)
    {
        cout << "Roots are imaginary." << endl;
        return false;
    }

    eq.proot = (-eq.b + sqrt(discriminant)) / (2.0 * eq.a);
    eq.nroot = (-eq.b - sqrt(discriminant)) / (2.0 * eq.a);

    return true;
}

void displayroots(equation eq)
{
    cout << "Positive Root = " << eq.proot << endl;
    cout << "Negative Root = " << eq.nroot << endl;
}

int main()
{
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    equation eq1;
    int a, b, c;

    cout << "Enter coefficient a: ";
    cin >> a;

    cout << "Enter coefficient b: ";
    cin >> b;

    cout << "Enter coefficient c: ";
    cin >> c;

    eq1.setcoefficients(a, b, c);

    if (calculateroots(eq1))
    {
        displayroots(eq1);
    }

    return 0;
}