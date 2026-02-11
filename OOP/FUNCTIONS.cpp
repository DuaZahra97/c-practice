#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// 1. Largest of three numbers
void largestOfThree() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int largest = (a > b && a > c) ? a : (b > c ? b : c);
    cout << "Largest number is: " << largest << endl;
}

// 2. Even or Odd
void evenOdd() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;
    cout << n << " is " << ((n % 2 == 0) ? "EVEN" : "ODD") << endl;
}

// 3. Even numbers from 1–100
void printEvenNumbers() {
    cout << "Even numbers from 1 to 100:\n";
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl;
}

// 4. Count persons in age group 50–60
void countAgeGroup() {
    int n;
    cout << "Enter number of persons: ";
    cin >> n;
    int count = 0, age;
    for (int i = 0; i < n; i++) {
        cout << "Enter age of person " << i+1 << ": ";
        cin >> age;
        if (age >= 50 && age <= 60) count++;
    }
    cout << "Number of persons in age group 50–60: " << count << endl;
}

// 5. Reverse array
void reverseArray() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << "Array in reverse order:\n";
    for (int i = n-1; i >= 0; i--) cout << arr[i] << " ";
    cout << endl;
}

// Helper: check prime
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0) return false;
    return true;
}

// 6. Minimum prime in array
void minPrimeArray() {
    int arr[7];
    cout << "Enter 7 integers:\n";
    for (int i = 0; i < 7; i++) cin >> arr[i];
    int minPrime = INT_MAX, loc = -1;
    for (int i = 0; i < 7; i++) {
        if (isPrime(arr[i]) && arr[i] < minPrime) {
            minPrime = arr[i];
            loc = i;
        }
    }
    if (loc != -1) {
        cout << "Minimum prime value: " << minPrime << " at location " << loc << endl;
        arr[0] = minPrime;
        cout << "Array after copying min prime to first index:\n";
        for (int i = 0; i < 7; i++) cout << arr[i] << " ";
        cout << endl;
    } else {
        cout << "No prime numbers found in array.\n";
    }
}

// 7. Character array 2x4
void charArray() {
    char arr[2][4];
    cout << "Enter 8 characters:\n";
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr[i][j];
    cout << "Character array:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

// 8. Swap two 3x3 matrices
void swapMatrices() {
    int A[3][3], B[3][3];
    cout << "Enter first 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> A[i][j];
    cout << "Enter second 3x3 matrix:\n";
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> B[i][j];
    // Swap
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            swap(A[i][j], B[i][j]);
    cout << "Matrix A after swap:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << A[i][j] << " ";
        cout << endl;
    }
    cout << "Matrix B after swap:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << B[i][j] << " ";
            if (B[i][j] % 2 != 0)
                cout << "(odd at [" << i << "," << j << "]) ";
        }
        cout << endl;
    }
}

// 9. Convert for loops to do-while (example)
void doWhileExample() {
    int i = 1;
    cout << "Numbers 1 to 10 using do-while:\n";
    do {
        cout << i << " ";
        i++;
    } while (i <= 10);
    cout << endl;
}

// 10. Employee structure
struct Employee {
    int id;
    string name, dob, address, designation, joiningDate, contact;
    double salary;
};

void employeeRecords() {
    Employee emp[10];
    for (int i = 0; i < 10; i++) {
        emp[i].id = i+1;
        cout << "Enter details for employee " << emp[i].id << ":\n";
        cout << "Name: "; cin >> emp[i].name;
        cout << "DOB: "; cin >> emp[i].dob;
        cout << "Address: "; cin >> emp[i].address;
        cout << "Designation: "; cin >> emp[i].designation;
        cout << "Joining Date: "; cin >> emp[i].joiningDate;
        cout << "Salary: "; cin >> emp[i].salary;
        cout << "Contact: "; cin >> emp[i].contact;
    }
    char choice;
    do {
        int searchId;
        cout << "Enter ID to search (or press Q to quit): ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q') break;
        searchId = choice - '0'; // simple conversion
        bool found = false;
        for (int i = 0; i < 10; i++) {
            if (emp[i].id == searchId) {
                cout << "Employee found: " << emp[i].name << ", " << emp[i].designation << endl;
                found = true;
                break;
            }
        }
        if (!found) cout << "67\n";
    } while (true);
}

// Main menu
int main() {
    int choice;
    cout << "Name: Dua Zahra" << endl;
    cout << "Reg No: 25-CS-59" << endl;
    do {
        cout << "\nMenu:\n";
        cout << "1. Largest of three numbers\n";
        cout << "2. Even or Odd\n";
        cout << "3. Print Even numbers 1–100\n";
        cout << "4. Count persons in age group 50–60\n";
        cout << "5. Reverse array\n";
        cout << "6. Minimum prime in array\n";
        cout << "7. Character array 2x4\n";
        cout << "8. Swap two 3x3 matrices\n";
        cout << "9. Do-while example\n";
        cout << "10. Employee records\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: largestOfThree(); break;
            case 2: evenOdd(); break;
            case 3: printEvenNumbers(); break;
            case 4: countAgeGroup(); break;
            case 5: reverseArray(); break;
            case 6: minPrimeArray(); break;
            case 7: charArray(); break;
            case 8: swapMatrices(); break;
            case 9: doWhileExample(); break;
            case 10: employeeRecords(); break;
            case 0: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 0);

    return 0;
}
