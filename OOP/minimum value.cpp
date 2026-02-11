#include <iostream>
using namespace std;

class MinPrimeArray {
private:
    int arr[7];
    int minPrime;
    int minIndex;

    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }

public:
    void input() {
        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
    }

    void findMinPrime() {
        minPrime = -1;
        minIndex = -1;
        for (int i = 0; i < 7; i++) {
            if (isPrime(arr[i])) {
                if (minPrime == -1 || arr[i] < minPrime) {
                    minPrime = arr[i];
                    minIndex = i;
                }
            }
        }
    }

    void modifyArray() {
        if (minPrime != -1) {
            arr[0] = minPrime;
        }
    }

    void display() {
        if (minPrime != -1) {
            cout << "Minimum prime: " << minPrime << endl;
            cout << "Location: " << minIndex << endl;
        } else {
            cout << "No prime number found in the array." << endl;
        }

        cout << "Modified array: ";
        for (int i = 0; i < 7; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;

    MinPrimeArray obj;
    obj.input();
    obj.findMinPrime();
    obj.modifyArray();
    obj.display();

    return 0;
}
