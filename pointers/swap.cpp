#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    int x, y;

    cout << "Enter first value: ";
    cin >> x;

    cout << "Enter second value: ";
    cin >> y;

    swap(&x, &y);

    cout << "\nAfter swapping:" << endl;
    cout << "First value: " << x << endl;
    cout << "Second value: " << y << endl;

    return 0;
}
