#include <iostream>
using namespace std;

struct FoodChain {
    int foodID;
    string foodName;
    float price;
};

struct Order {
    int orderID;
    FoodChain food[5];
};

int main() {
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    char choice;

    do {
        Order o;

        cout << "\nEnter Order ID: ";
        cin >> o.orderID;

        for (int i = 0; i < 5; i++) {
            cout << "\nEnter details of food " << i + 1 << endl;

            cout << "Food ID: ";
            cin >> o.food[i].foodID;

            cout << "Food Name: ";
            cin >> o.food[i].foodName;

            cout << "Price: ";
            cin >> o.food[i].price;
        }

        cout << "\n----- Order Details -----\n";
        cout << "Order ID: " << o.orderID << endl;

        for (int i = 0; i < 5; i++) {
            cout << "\nFood " << i + 1 << endl;
            cout << "Food ID: " << o.food[i].foodID << endl;
            cout << "Food Name: " << o.food[i].foodName << endl;
            cout << "Price: " << o.food[i].price << endl;
        }

        cout << "\nDo you want to order again? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}
