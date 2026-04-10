#include<iostream>
using namespace std;
class matrix
{
	private:
		int arr[2][2];
	public:
		void input()
		{
			cout<<"Enter Elements of Matrix"<<endl;
			for(int i=0;i<2;i++)
			   for(int j=0; j<2; j++)
			   cin>>arr[i][j];	
		}
		void display()
		
			for(int i=0; i<2; i++)
			{
				for(int j=0; j<2; j++)
				{
					cout<<arr[i][j]<<" ";
				}	   
	    	cout<<endl;
	       }
        }
        friend matrix addMatrix(matrix m1, matrix m2);