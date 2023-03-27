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
int main(){
	int n;
	cin>>n;//4
	cout<<fact(n)<<endl;	
	return 0;
}
