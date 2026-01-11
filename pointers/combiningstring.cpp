#include <iostream>
using namespace std;

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    char str1[100], str2[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    char *ptr1 = str1;
    while (*ptr1 != '\0') {
        ptr1++;
    }

    char *ptr2 = str2;
    while (*ptr2 != '\0') {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }
    *ptr1 = '\0';

    cout << "Combined string: " << str1 << endl;

    return 0;
}
