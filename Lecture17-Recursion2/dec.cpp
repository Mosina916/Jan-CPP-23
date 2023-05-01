#include<iostream>
using namespace std;
// void decprint(int n){
// 	// base case
// 	if(n==0){
// 		// cout<<1;
// 		return;
// 	}
// 	// rec case
// 	cout<<n<<" ";
// 	decprint(n-1);
// }

void decprint(int n){
	// base case
	if(n==1){
		cout<<1;
		
	}
	else{
		// rec case
	cout<<n<<" ";
	decprint(n-1);

	}
	
}
int main(){
	int n;
	cin>>n;//5
	decprint(n);


	return 0;
}