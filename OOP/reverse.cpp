#include <iostream>
using namespace std;

class ArrayReverse {
private:
    int size;
    int arr[100];

public:
    void input() {
        cin >> size;
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }

    void displayReverse() {
        for (int i = size - 1; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;
    cout << "Enter Elements of Array" << endl;

    ArrayReverse obj;
    obj.input();
    obj.displayReverse();

    return 0;
}
