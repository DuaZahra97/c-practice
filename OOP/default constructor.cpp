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
    }

    Vision(int l, int w) {
        cout << "\n--- Using Parameterized Constructor (int) ---" << endl;
        length = l;
        width = w;
        calculateAreaAndPrice();
    }

    Vision(float l, float w) {
        cout << "\n--- Using Parameterized Constructor (float) ---" << endl;
        length = l;
        width = w;
        calculateAreaAndPrice();
    }

    void display(string label = "") {
        if (!label.empty()) cout << label << endl;
        cout << "Your LCD purchase details are:" << endl;
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Price = " << price << endl;
    }
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    float lf, wf;
    int li, wi;

    Vision tv1; 
    tv1.display("\nOutput from Nullary Constructor:");

    cout << "\nEnter integer length and width for int constructor: ";
    cin >> li >> wi;
    Vision tv2(li, wi);
    tv2.display("\nOutput from Parameterized Constructor (int):");

    cout << "\nEnter float length and width for float constructor: ";
    cin >> lf >> wf;
    Vision tv3(lf, wf);
    tv3.display("\nOutput from Parameterized Constructor (float):");

    Vision tv4 = tv2; 
    tv4.display("\nOutput from Default Copy Constructor (copied from int constructor object):");

    return 0;
}
