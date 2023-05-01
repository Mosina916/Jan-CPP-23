#include<iostream>
using namespace std;
int fibo(int pos){
	// base case
	if(pos==0||pos==1){
		return pos;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
int main(){
	int pos;
	cin>>pos;
	cout<<fibo(pos)<<endl;
	return 0;
}