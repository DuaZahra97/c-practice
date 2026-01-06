#include <iostream>
using namespace std;

void checkNumber(int num) {
    bool isPrime = true;

    if(num <= 1) {
        isPrime = false;
    } else {
        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    bool isEven = (num % 2 == 0);

    cout << num << " is ";
    
    if(isPrime) cout << "a prime ";
    else cout << "not a prime ";

    if(isEven) cout << "even number." << endl;
    else cout << "odd number." << endl;
}

int main() {
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl << endl;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    checkNumber(number);

    return 0;
}
