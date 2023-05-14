#include<iostream>
using namespace std;
int nstaircase(int n){
	// base case 
	if(n==0){
		return 1;
	}
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}


	// rec case
	return nstaircase(n-1)+nstaircase(n-2)+nstaircase(n-3);
}
int main(){
	int n;
	cin>>n;//5
	cout<<nstaircase(n)<<endl;






	return 0;
}