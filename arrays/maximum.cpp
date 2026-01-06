#include<iostream>
using namespace std;

int main ()
{
    cout << "Dua Zahra" << endl;
    cout << "25-CS-59" << endl;

    int arr[10];
    cout << "Enter 10 numbers:" << endl;
    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 1; i < 10; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum = " << max << endl;

    return 0;
}
