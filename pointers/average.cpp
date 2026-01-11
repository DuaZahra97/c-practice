#include <iostream>
using namespace std;

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    int n;
    cout << "Enter number of students: ";
    cin >> n;

    int *marks = new int[n];  

    for (int i = 0; i < n; i++) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> marks[i];
    }

    
    auto calculateAverage = [&](int arr[], int size) -> double {
        int sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return (double)sum / size;
    };

    cout << "\nAverage marks of class: " << calculateAverage(marks, n) << endl;

    char choice;
    cout << "\nDo you want to modify any marks? (y/n): ";
    cin >> choice;

    while (choice == 'y' || choice == 'Y') {
        int studentIndex, newMarks;
        cout << "Enter student number to modify (1 to " << n << "): ";
        cin >> studentIndex;

        if (studentIndex < 1 || studentIndex > n) {
            cout << "Invalid student number!" << endl;
        } else {
            cout << "Enter new marks: ";
            cin >> newMarks;
            marks[studentIndex - 1] = newMarks;

            cout << "Updated average marks: " << calculateAverage(marks, n) << endl;
        }

        cout << "\nDo you want to modify another marks? (y/n): ";
        cin >> choice;
    }

    delete[] marks;  
    return 0;
}
