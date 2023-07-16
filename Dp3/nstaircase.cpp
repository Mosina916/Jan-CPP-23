#include<iostream> 
#include<cmath>
using namespace std;
// assme for steps at max 3
// int nstaricase(int n){
// 	// base c
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}


// 	// rec case
// 	return nstaricase(n-1)+nstaricase(n-2)+nstaricase(n-3);
// }


// int nstaricase(int n,int k){//5
// 	// base c
// 	if(n==0){
// 		return 1;
// 	}
// 	if(n<0){
// 		return 0;
// 	}
// 	int ans=0;
// 	for(int i=1;i<=k;i++){
// 		ans=ans+nstaricase(n-i,k);
// 	}


//  	return ans;
// }



int main(){
	int n,k;
	cin>>n>>k;
	cout<<nstaricase(n,k)<<endl;
	// cout<<nstaricase(n)<<endl;

	

	return 0;
}