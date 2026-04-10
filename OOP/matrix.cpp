#include <iostream>
using namespace std;

class Matrix {
private:
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];

public:
    Matrix(int m1[3][3], int m2[3][3]) {
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++) {
                mat1[i][j] = m1[i][j];
                mat2[i][j] = m2[i][j];
                sum[i][j] = 0;
            }
    }

    friend void addMatrices(Matrix &m);
    friend void displaySum(Matrix &m);
};

void addMatrices(Matrix &m) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            m.sum[i][j] = m.mat1[i][j] + m.mat2[i][j];
}

void displaySum(Matrix &m) {
    cout << "\nSum of the matrices:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << m.sum[i][j] << " ";
        cout << endl;
    }
}

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg no: 25-CS-59" << endl;

    int matrix1[3][3], matrix2[3][3];

    cout << "\nEnter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix1[i][j];
        }
    }

    cout << "\nEnter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix2[i][j];
        }
    }

    Matrix m(matrix1, matrix2);

    addMatrices(m);
    displaySum(m);

    return 0;
}