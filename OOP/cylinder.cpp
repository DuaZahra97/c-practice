#include<iostream>
using namespace std;
	class cylinder
	{
		float radius;
		float height;
		public:
		void setradius(float);
		void getheight();
		void display();
	};
	void cylinder :: setradius (float r)
	{
		radius=r;
	}
	void cylinder :: getheight()
	{
		cout<<"enter height"<<endl;
		cin>>height;
	}
	void cylinder:: display()
	{
		cout<<"Height="<<height<<endl;
		cout<<"Radius="<<radius<<endl;
		
	}
int main()
{
	cylinder obj;
	obj.setradius(6.7);
	obj.getheight();
	obj.display();
}