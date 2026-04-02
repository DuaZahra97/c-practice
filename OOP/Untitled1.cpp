#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
    string brand;
    string model;
    int serial;
    string colour;
    float price;
    float processorSpeed;
    int RAM;
    float screenSize;

public:
    void setLaptopDetails(string b, string m, int s, string c, float p, float ps, int r, float ss) {
        brand = b;
        model = m;
        serial = s;
        colour = c;
        price = p;
        processorSpeed = ps;
        RAM = r;
        screenSize = ss;
    }

    void upgradeRAM(int extraRAM) {
        RAM = RAM + extraRAM;
    }

    void displayLaptop() {
        cout << "\nDua Zahra\n25-CS-59\n";
        cout << "Brand = " << brand << endl;
        cout << "Model = " << model << endl;
        cout << "Serial = " << serial << endl;
        cout << "Colour = " << colour << endl;
        cout << "Price = " << price << endl;
        cout << "Processor = " << processorSpeed << endl;
        cout << "RAM = " << RAM << endl;
        cout << "Screen = " << screenSize << endl;
    }
};

int main() {
    Laptop myLaptop;
    string brand, model, colour;
    int serial, RAM, extraRAM;
    float price, processorSpeed, screenSize;

    cout << "Enter Brand: ";
    cin >> brand;

    cout << "Enter Model: ";
    cin >> model;

    cout << "Enter Serial: ";
    cin >> serial;

    cout << "Enter Colour: ";
    cin >> colour;

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Processor Speed: ";
    cin >> processorSpeed;

    cout << "Enter RAM: ";
    cin >> RAM;

    cout << "Enter Screen Size: ";
    cin >> screenSize;

    myLaptop.setLaptopDetails(brand, model, serial, colour, price, processorSpeed, RAM, screenSize);

    cout << "Enter RAM to Upgrade: ";
    cin >> extraRAM;

    myLaptop.upgradeRAM(extraRAM);
    myLaptop.displayLaptop();

    return 0;
}