#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int arr[5],min=INT_MAX;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
		if(arr[i]<min)
		{
			min=arr[i];
		}
	
	}
	/*for(int i=0;i<5;i++)
	{
		while(arr[i]<min)
		{
			min=arr[i];
			i++;
		}
	
	
	}*/
		cout<<min;
}