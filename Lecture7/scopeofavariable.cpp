#include<iostream>
using namespace std;
int p=20;//global variables

int main(){
	// local variables
	int a=10;
	int b=90;
	int p=55;
	// scope resolution operator
	cout<<::p<<endl;
	::p=::p+99;
	cout<<::p<<endl;

	// cout<<p<<endl;
	if(a>=10){
		a=a+30;
		int c=10;
		int b=80;
		b=b+10;
		float d=90.34;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
		cout<<d<<endl;
	}
		cout<<a<<endl;
		cout<<b<<endl;
		// cout<<c<<endl;
		// cout<<d<<endl;
	

	return 0;
}