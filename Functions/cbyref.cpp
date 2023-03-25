#include<iostream>
using namespace std;
void f(int &n){
	n=n+90;
	cout<<n<<endl;//100

}
int main(){
	int a=10;
	cout<<a<<endl;//10
	f(a);	
	cout<<a<<endl;//10
	
	// int anant=3;
	// int &abhinav=anant;
	// anant=anant+10;
	// cout<<anant<<endl;
	// cout<<abhinav<<endl;

	
	return 0;
}
