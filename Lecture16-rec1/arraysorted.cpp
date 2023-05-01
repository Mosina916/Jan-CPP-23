#include<iostream>
using namespace std;
bool isarrsorted(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}


	// rec case
	if(isarrsorted(arr,n-1)==true and arr[n-2]<=arr[n-1]){
		return true;
	}

	// else{
		return false;
	// }
}

bool isarrsorted2(int *arr,int n){
	// base case
	if(n==1){
		return true;
	}


	// rec case
	if(isarrsorted2(arr+1,n-1)==true and arr[0]<=arr[1]){
		return true;
	}

	// else{
		return false;
	// }
}
int main(){
	int arr[]={3,5,7,9,13};
	// int arr[]={3,5,7,19,13};
	int n=sizeof(arr)/sizeof(int);
	if(isarrsorted2(arr,n)==true){
		cout<<"array is sorted "<<endl;
	}
	else{
		cout<<"array is unsorted "<<endl;

	}
	// if(isarrsorted(arr,n)==true){
	// 	cout<<"array is sorted "<<endl;
	// }
	// else{
	// 	cout<<"array is unsorted "<<endl;

	// }
	return 0;
}