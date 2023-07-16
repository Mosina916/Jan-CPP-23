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


int tdnstaricase(int n,int k,int *arr){//5
	// base c
	if(n==0){
		return arr[n]=1;
	}
	if(n<0){
		return 0;
	}
	if(arr[n]!=-1){
		return arr[n];
	}
	int ans=0;  
	for(int i=1;i<=k;i++){
		ans=ans+tdnstaricase(n-i,k,arr);
	}


 	return arr[n]=ans;
}

int bottomup(int n,int k){// 5 3 -->13
	int*arr=new int[n+1];
	arr[0]=1;


	for(int j=1;j<=n;j++){
		int ans=0;
	for(int l=1;l<=k;l++){
		if(j-l>=0){
		ans=ans+arr[j-l];

	}

	}
	arr[j]=ans;

	}

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<' ';
	}

	cout<<endl;

	return arr[n];


}



int main(){
	int n,k;
	cin>>n>>k;//5

	cout<<bottomup(n,k)<<endl;
	// cout<<nstaricase(n,k)<<endl;
	// cout<<nstaricase(n)<<endl;

	// int *arr=new int[n+1];
	// for(int i=0;i<=n;i++){
	// 	arr[i]=-1;
	// }
	// cout<<tdnstaricase(n,k,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;


	

	return 0;
}