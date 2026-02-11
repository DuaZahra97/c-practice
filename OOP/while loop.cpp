#include <iostream>
using namespace std;

class ArrayProcess {
private:
    int A[5] = {68, 23, 74, 47, 89};

public:
    void process() {
        int i = 0, j;

        i = 0;
        do {
            j = i + 1;
            do {
                if (A[j] > A[i]) {
                    A[i] = A[i] + A[j];
                    A[j] = A[i] - A[j];
                    A[i] = A[i] - A[j];
                }
                j++;
            } while (j < 5);
            i++;
        } while (i < 5);

        i = 0;
        do {
            j = i + 1;
            do {
                if (A[j] < A[i]) {
                    A[i] = A[i] + A[j];
                    A[j] = A[i] - A[j];
                    A[i] = A[i] - A[j];
                }
                j++;
            } while (j < 5);
            i++;
        } while (i < 5);
    }

    void display() {
        int i = 0, j;
        do {
            j = i + 1;
            do {
                cout << A[i] << " ";
                break;
            } while (false);
            i++;
        } while (i < 5);
        cout << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    ArrayProcess obj;
    obj.process();
    obj.display();

    return 0;
}
