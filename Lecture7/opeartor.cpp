#include<iostream>
using namespace std;
int main(){
	int a=-1,b=9,c=0,d=1;
	if(a++ and b-- and c++){
		cout<<"hello"<<endl;
	}
	else if( --c and ++a and b--){
		cout<<"world"<<endl;

	}
	else if(a++ and d-- and b++){
		cout<<"coding "<<endl;

	}
	else{
		cout<<"blocks"<<endl;
	} 
	cout<<"value of a is "<<a<<endl;
	cout<<"value of b is "<<b<<endl;
	cout<<"value of c is "<<c<<endl;
	cout<<"value of d is "<<d<<endl;



	


	return 0;
}