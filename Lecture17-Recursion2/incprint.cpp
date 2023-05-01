#include<iostream>
using namespace std;

// void incprint(int n){
// 	// base case
// 	if(n==0){
// 		return;
// 	}
// 	// rec case
// 	incprint(n-1);//1 2 3 4
// 	cout<<n<<" ";	
// }

// void incprint2(int n,int i){
// 	// base case
// 	if(i==n+1){
// 		return;
// 	}
// 	// rec case
// 	cout<<i<<" ";
// 	incprint2(n,i+1);//1 2 3 4
	
// }

int main(){
	int n;
	cin>>n;//5
	incprint2(n,1);


	return 0;
}