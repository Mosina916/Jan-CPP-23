#include<iostream>
using namespace std;
int nstaircase(int n, int k){
	// base case 
	// if(n==0){
	// 	return 1;
	// }
	// if(n==1){
	// 	return 1;
	// }
	// if(n==2){
	// 	return 2;
	// }
	// if(n==3){
	// 	return 2;
	// }
	if(n==0){
		return 1;
	}

	if(n<0){
		return 0;
	}



	// rec case
	int ans=0;
	for(int i=1;i<=k;i++){
		ans=ans+nstaircase(n-i,k);
	}

	return ans;
}
int main(){
	int n,k;
	cin>>n>>k;//5 3
	cout<<nstaircase(n,k)<<endl;






	return 0;
}