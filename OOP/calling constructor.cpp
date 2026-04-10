#include<iostream>
using namespace std;
class myclass{
	private:
		int data;
	public:
		int fun();
		myclass(){
			cout<<"Constructor was called"<<endl;
		};
		~myclass(){
			cout<<"Destructor was called"<<endl;
		};
};
int main(){
	myclass obj;
}