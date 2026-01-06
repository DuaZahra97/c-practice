#include<iostream>
using namespace std;
int main ()
{
	cout<<"Dua Zahra"<<endl;
	cout<<"25-CS-59"<<endl;
	int arr[10];
	int sum=0,average;
	cout<<"Enter 10 odd numbers"<<endl;
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		if(arr[i]%2==0)
		{
			cout<<"invalid entry! Enter an odd number"<<endl;
		    i--;
		    continue;
		}
	  sum+=arr[i];
		
	}
	average=sum/10;
	cout<<"sum="<<sum<<endl;
	cout<<"average ="<<average;
}