#include<iostream>
using namespace std;
int main(){

	int arr[]={4,3,5,2,1};
	int n=sizeof(arr)/sizeof(int);
// 	// selection sort
	for(int pos=0;pos<=n-2;pos++){
		int minindex=pos;
	for(int j=pos+1;j<=n-1;j++){
		if(arr[j]<arr[minindex]){
		minindex=j;
	}

	}
	swap(arr[minindex],arr[pos]);
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";

	}
	cout<<endl;






}