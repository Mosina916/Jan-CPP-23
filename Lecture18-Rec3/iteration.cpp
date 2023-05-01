#include<iostream>
using namespace std;
void f(int i,int n){
	// base case
	if(i==n+1){
		return;
	}
	// rec case
	cout<<i<<" ";//0
	// f(i++,n);
	// f(++i,n);
	f(i+1,n);
}
int main(){
	int n;
	cin>>n;//0 3 
	f(0,n);
	
	return 0;

}