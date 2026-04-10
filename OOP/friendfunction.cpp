#include <iostream>
using namespace std;

class Patient 
{
private:
    int patientID;
    string diagnosis;

public:
    Patient(int id, string diag) 
	{
        patientID = id;
        diagnosis = diag;
    }

    friend void generateReport(Patient p);
};

void generateReport(Patient p) 
{
    cout << "Patient ID: " << p.patientID << endl;
    cout << "Diagnosis: " << p.diagnosis << endl;
}

int main() 
{
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
    Patient p1(101, "Hypertension");

    generateReport(p1);

    return 0;
}