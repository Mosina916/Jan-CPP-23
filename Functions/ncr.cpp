#include<iostream>
using namespace std;
int fact(int a){//4
	// 4 *3*2*1
	int ans=1;
	for(int i=a;i>=1;i--){//1
	ans=ans*i;//24
}
return ans;//24
}
int ncr(int n,int r){
	return fact(n)/(fact(r)*fact(n-r));
}
int main(){
	// r,int;
	int n,r;
	cin>>n>>r;//4
	cout<<ncr(n,r)<<endl;	
	return 0;
}
