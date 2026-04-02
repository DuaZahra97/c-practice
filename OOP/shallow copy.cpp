#include <iostream>
#include <cstring>
using namespace std;

class Diablo {
private:
    char* owner;
    string colour;
    int seats;
    int cubicCapacity;
    int yearOfManufacture;
    int engineNumber;
    int frameNumber;

public:
    Diablo(const char* o, int y, int e, int f) {
        owner = new char[strlen(o) + 1];
        strcpy(owner, o);
        colour = "Hot Red";
        seats = 2;
        cubicCapacity = 5700;
        yearOfManufacture = y;
        engineNumber = e;
        frameNumber = f;
    }

    Diablo(const Diablo& other) {
        owner = new char[1];
        owner[0] = '\0';
        colour = other.colour;
        seats = other.seats;
        cubicCapacity = other.cubicCapacity;
        yearOfManufacture = 0;
        engineNumber = 0;
        frameNumber = 0;
    }

    void setOwner(const char* o) {
        delete[] owner;
        owner = new char[strlen(o) + 1];
        strcpy(owner, o);
    }

    void setYear(int y) { yearOfManufacture = y; }
    void setEngine(int e) { engineNumber = e; }
    void setFrame(int f) { frameNumber = f; }

    void display(string label = "") const {
        if (!label.empty()) cout << label << endl;
        cout << "Colour = " << colour << endl;
        cout << "Owner = " << owner << endl;
        cout << "Year of manufacture = " << yearOfManufacture << endl;
        cout << "Seats = " << seats << endl;
        cout << "Cubic Capacity = " << cubicCapacity << endl;
        cout << "Engine number = " << engineNumber << endl;
        cout << "Frame number = " << frameNumber << endl;
        cout << endl;
    }

    ~Diablo() {
        delete[] owner;
    }
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Diablo obj1("Ali Raza", 2013, 123456, 987654);
    obj1.display("Object 1 (Initialized with full attributes):");

    Diablo obj2 = obj1;
    obj2.setOwner("New Owner");
    obj2.setYear(2024);
    obj2.setEngine(654321);
    obj2.setFrame(111222);
    obj2.display("Object 2 (Created via Copy Constructor, permanent attributes copied):");

    return 0;
}
