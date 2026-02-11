#include <iostream>
using namespace std;

class LargestNumber {
private:
    int num1, num2, num3;

public:
    void input() {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    void findLargest() {
        int largest;

        if (num1 >= num2 && num1 >= num3)
            largest = num1;
        else if (num2 >= num1 && num2 >= num3)
            largest = num2;
        else
            largest = num3;

        cout << "Largest number is: " << largest << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    LargestNumber obj;
    obj.input();
    obj.findLargest();

    return 0;
}
