#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2]; 

public:
    void input()
	 {
        cout << "Enter elements of matrix:\n";
        for(int i = 0; i < 2; i++) {
            for(int j = 0; j < 2; j++) {
                cin >> a[i][j];
            }
        }
    }
    void display() {
        for(int i = 0; i < 2; i++) 
		{
            for(int j = 0; j < 2; j++)
			 {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    friend Matrix addMatrix(Matrix m1, Matrix m2);
};

Matrix addMatrix(Matrix m1, Matrix m2) 
{
    Matrix result;

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            result.a[i][j] = m1.a[i][j] + m2.a[i][j];
        }
    }

    return result;
}

int main() {
		cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Matrix m1, m2, sum;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "Enter second matrix:\n";
    m2.input();

    sum = addMatrix(m1, m2);

    cout << "Matrix after addition:\n";
    sum.display();

    return 0;
}