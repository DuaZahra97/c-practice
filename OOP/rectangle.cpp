#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    void setDimensions(int l, int w) {
        length = l;
        width = w;
    }

    void incrementDimensions() {
        length++;
        width++;
    }

    int calculateArea() const {
        return length * width;
    }

    void displayDetails() const {
        cout << "\nDua Zahra\n25-CS-59\n";
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << calculateArea() << endl;
    }
};

int main() {
    Rectangle rect;
    int length, width;

    cout << "Enter Length: ";
    cin >> length;

    cout << "Enter Width: ";
    cin >> width;

    rect.setDimensions(length, width);
    rect.incrementDimensions();
    rect.displayDetails();

    return 0;
}