#include<iostream>
using namespace std;
int main()
{
	int arr[5],count=0;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	
	}
	
	for(int i=0;i<5;i++)
	{
			if(arr[i]>=0)
		{
		  count+=1;
		}
	
	
	}
	cout<<count;
	
}