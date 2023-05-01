#include<iostream>
using namespace std;
int digitssum(int n){
	// base case
	if(n==0){
		return 0;
	}


	// rec case
	return digitssum(n/10)+n%10;
}
int main(){
	int n;
	cin>>n;//3457

	cout<<digitssum(n)<<endl;


	


	return 0;
}