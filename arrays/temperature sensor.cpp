#include <iostream>
using namespace std;

int main() {
	 cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    const int DAYS = 7;
    int temps[DAYS];
    int abnormalCount = 0;

    cout << "Enter temperatures for 7 days (in celcius):" << endl;

    for (int i = 0; i < DAYS; i++) {
        cout << "Day " << i+1 << ": ";
        cin >> temps[i];
    }

    cout << "\nAbnormal days: ";
    
    for (int i = 0; i < DAYS; i++) {
        if (temps[i] < 10 || temps[i] > 40) {
            cout << i+1 << " ";
            abnormalCount++;
        }
    }

    cout << "\nTotal abnormal days: " << abnormalCount << endl;

    return 0;
}
