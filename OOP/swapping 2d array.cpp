#include <iostream>
using namespace std;

class MatrixSwap {
private:
    int mat1[3][3], mat2[3][3];

public:
    void input() {
        cout << "Enter elements of first 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat1[i][j];

        cout << "Enter elements of second 3x3 matrix:" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> mat2[i][j];
    }

    void swapMatrices() {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                swap(mat1[i][j], mat2[i][j]);
    }

    void display() {
        cout << "First matrix after swapping:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat1[i][j] << " ";
            cout << endl;
        }

        cout << "Second matrix after swapping:" << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++)
                cout << mat2[i][j] << " ";
            cout << endl;
        }

        cout << "Locations of odd values in second matrix:" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                if (mat2[i][j] % 2 != 0)
                    cout << "Odd value " << mat2[i][j] << " at (" << i << "," << j << ")" << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    MatrixSwap obj;
    obj.input();
    obj.swapMatrices();
    obj.display();

    return 0;
}
