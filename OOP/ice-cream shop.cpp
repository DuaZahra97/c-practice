#include <iostream>
#include <string>
using namespace std;

class IceCream {
private:
    string flavour;
    int scoops;
    bool wafer;
    int totalPrice;

public:
    IceCream(string f, int s, bool w) {
        flavour = f;
        scoops = s;
        wafer = w;
        totalPrice = 0;
        calculatePrice();
    }

    void calculatePrice() {
        if (scoops < 2 || scoops > 3) {
            cout << "Invalid Input" << endl;
            return;
        }
        if (scoops == 2) totalPrice = 100;
        else if (scoops == 3) totalPrice = 150;
        if (wafer) totalPrice += 10;
        if (flavour == "chocolate" || flavour == "Chocolate") {
            if (scoops == 2) totalPrice = 120;
            else if (scoops == 3) totalPrice = 180;
            if (wafer) totalPrice += 10;
        }
    }

    void displayOrder() {
        if (scoops < 2 || scoops > 3) {
            cout << "Thank you for visiting LeCream!" << endl;
            return;
        }
        cout << "Your choice of ice cream is as follows" << endl;
        cout << "Flavour = " << flavour << endl;
        cout << "Number of scoops = " << scoops << endl;
        cout << "Wafer is " << (wafer ? "required" : "not required") << endl;
        cout << "Total price is " << totalPrice << endl;
    }

    ~IceCream() {
        cout << "Thank you for visiting LeCream!" << endl;
    }
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    string flavour;
    int scoops;
    char waferChoice;
    bool wafer;

    cout << "Welcome to LeCream!" << endl;
    cout << "Available flavours: chocolate, vanilla, strawberry, mango, tutti fruit, almond crunch, coffee" << endl;

    cout << "Enter flavour: ";
    getline(cin, flavour);

    cout << "Enter number of scoops (2 or 3): ";
    cin >> scoops;

    cout << "Do you want a wafer (y/n)? ";
    cin >> waferChoice;
    wafer = (waferChoice == 'y' || waferChoice == 'Y');

    IceCream order(flavour, scoops, wafer);
    order.displayOrder();

    return 0;
}
