#include<iostream>
using namespace std;
// merge 2 sorted arrays
void mergetwosortedarray(int *arr,int s,int e){
	int temp[100000];
	int mid=(s+e)/2;

	int i=s,j=mid+1,k=s;

	while(i<=mid and j<=e){
		if(arr[i]<arr[j]){
		temp[k]=arr[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr[j];
		j++;
		k++;
	}


	}

	// cop karo 2nd array ko agar pehli khatam huvi hai
	while(j<=e){
		temp[k]=arr[j];
		j++;
		k++;
	}

		// cop karo ist array ko agar 2nd khatam huvi hai
	while(i<=mid){
		temp[k]=arr[i];
		i++;
		k++;
	}


	// copy temp ko arr mai
	for(int l=s;l<=e;l++){
		arr[l]=temp[l];
	}
	
}

// merge sort
void mergesort(int *arr,int s,int e){
	// base case
	if(s==e){
		return;
	}
	// /rec case
	int mid=(s+e)/2;
	mergesort(arr,s,mid);
	mergesort(arr,mid+1,e);
	mergetwosortedarray(arr,s,e);
}


int main(){
	int arr[]={4,3,3,3,3,6,6,4,88,6,5,3,1,5,2};

	int n=sizeof(arr)/sizeof(int);
	mergesort(arr,0,n-1);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;





	return 0;
}