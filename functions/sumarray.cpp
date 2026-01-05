#include<iostream>
using namespace std;
int sumarray(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
	  sum+=arr[i];
	}
	
	return sum;
}
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
	  	cin>>arr[i];
	}

	cout<<sumarray( arr,5);
}
