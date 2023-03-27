#include<iostream>
using namespace std;
void f(int*ptr){
	*ptr=*ptr+30;
	cout<<*ptr<<endl;


}
int main(){
	int x=10;
	cout<<x<<endl;//10
	f(&x);

	cout<<x<<endl;//40
	

	return 0;
}