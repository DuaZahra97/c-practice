#include <iostream>
using namespace std;

class Vision {
private:
    float length;
    float width;
    float price;

    void calculateAreaAndPrice() {
        float area = length * width;
        price = area * 65;
    }

public:
    Vision() {
        cout << "\n--- Using Nullary Constructor ---" << endl;
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter width: ";
        cin >> width;
        calculateAreaAndPrice();
        display();
    }

    Vision(int l, int w) {
        cout << "\n--- Using Parameterized Constructor (int) ---" << endl;
        length = l;
        width = w;
        calculateAreaAndPrice();
        display();
    }

    Vision(float l, float w) {
        cout << "\n--- Using Parameterized Constructor (float) ---" << endl;
        length = l;
        width = w;
        calculateAreaAndPrice();
        display();
    }

    void display() {
        cout << "Your LCD purchase details are:" << endl;
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Price = " << price << endl;
    }
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    float l, w;
    int li, wi;

    Vision tv1; // Nullary constructor, takes input inside itself

    cout << "\nEnter integer length and width for int constructor: ";
    cin >> li >> wi;
    Vision tv2(li, wi);

    cout << "\nEnter float length and width for float constructor: ";
    cin >> l >> w;
    Vision tv3(l, w);

    return 0;
}
