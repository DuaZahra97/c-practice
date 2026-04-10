#include <iostream>
using namespace std;

class Student; // Forward declaration

class Teacher {
public:
    void assignGrade(Student& s, int grade);
};

class Principal {
public:
    void viewGrade(Student& s);
};

class Student {
private:
    int grade;

public:
    friend class Teacher;   // Teacher can access grade
    friend class Principal; // Principal can also access grade
};

// Teacher assigns grade
void Teacher::assignGrade(Student& s, int grade) {
    s.grade = grade;
}

// Principal views grade
void Principal::viewGrade(Student& s) {
    cout << "Student Grade: " << s.grade << endl;
}

int main() {
		cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Student alice;
    Teacher bob;
    Principal mrSmith;

    bob.assignGrade(alice, 85);  // Teacher assigns grade
    mrSmith.viewGrade(alice);    // Principal views grade

    return 0;
}