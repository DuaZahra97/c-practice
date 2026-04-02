#include <iostream>
using namespace std;

class Shallow {
private:
    int* data;

public:
    Shallow(int value) {
        data = new int;
        *data = value;
    }

    Shallow(const Shallow& other) {
        data = other.data;
    }

    void setValue(int value) {
        *data = value;
    }

    void display(string label = "") const {
        if (!label.empty()) cout << label << endl;
        cout << "Value = " << *data << endl;
        cout << "Address = " << data << endl;
    }

    ~Shallow() {
        delete data;
    }
};

int main() {
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Shallow one(10);
    one.display("Object one (initial):");

    Shallow two = one;
    two.display("Object two (copied from one):");

    cout << "\nModifying object one..." << endl;
    one.setValue(99);

    one.display("Object one (after modification):");
    two.display("Object two (after modification of one):");

    return 0;
}
