#include <iostream>
using namespace std;

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    char source[100], destination[100];

    cout << "Enter a string: ";
    cin.getline(source, 100);

    char *src = source;
    char *dest = destination;

    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    cout << "Copied string: " << destination << endl;

    return 0;
}
