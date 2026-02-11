#include <iostream>
using namespace std;

class CharArray {
private:
    char arr[2][4];

public:
    void input() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> arr[i][j];
            }
        }
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 4; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    CharArray obj;
    obj.input();
    obj.display();

    return 0;
}
