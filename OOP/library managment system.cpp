#include <iostream>
using namespace std;

class Book {
private:
    static int totalBorrowed; 

public:
  
    Book() {
        totalBorrowed++;
        cout << "Book borrowed. Total now: " << totalBorrowed << endl;
    }

    ~Book() {
        totalBorrowed--;
        cout << "Book returned. Total now: " << totalBorrowed << endl;
    }

    static void showBorrowed() {
        cout << "Total borrowed books: " << totalBorrowed << endl;
    }
};

int Book::totalBorrowed = 0;

int main() {
		cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    cout << "Borrowing 3 books...\n";

    Book b1, b2, b3; 

    Book::showBorrowed();

    cout << "\nReturning books...\n";

    return 0; 
}