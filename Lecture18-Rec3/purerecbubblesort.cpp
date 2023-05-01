#include<iostream>
using namespace std;
void bubblesortrec(int *arr,int n,int co,int j){
	// base case
	if(co==n){
		return;

	}

	if(j==n-co){//jab j ka loop nahi chalega 
		bubblesortrec(arr,n,co+1,0);

	}
	else{
		// jab j ka loop chalega
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
		bubblesortrec(arr,n,co,j+1);

	}



	
}
int main(){
	int arr[]={5,4,3,2,1};
	int n=sizeof(arr)/sizeof(int);
	bubblesortrec(arr,n,1,0);
	
	
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";

}
cout<<endl;






}