#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	 cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    const int CANDIDATES = 5;
    int votes[CANDIDATES];
    int totalVotes = 0;

    for (int i = 0; i < CANDIDATES; i++) {
        cout << "Enter votes for candidate " << i+1 << ": ";
        cin >> votes[i];
        totalVotes += votes[i];
    }

    cout << "\nCandidate\tVotes Received\t% of Total Votes\n";
    cout << "----------------------------------------------\n";

    for (int i = 0; i < CANDIDATES; i++) {
        double percentage = (votes[i] * 100.0) / totalVotes;
        cout << i+1 << "\t\t" << votes[i] << "\t\t"
             << fixed << setprecision(2) << percentage << "%" << endl;
    }

    return 0;
}
