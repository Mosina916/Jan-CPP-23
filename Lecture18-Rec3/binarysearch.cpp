#include<iostream>
using namespace std;
bool binarysearch(int *arr,int s,int e,int key){
	// base case
	if(s>e){
		return false;
	}


	// rec case
	int mid=(s+e)/2;//3
	if(arr[mid]==key){
			cout<<"key is present at "<<mid<<endl;
			return true;
		}
		else if(key>arr[mid]){
			return binarysearch(arr,mid+1,e,key);
		}
		else{
			return binarysearch(arr,s,mid-1,key);
		}

}
int main(){
	int arr[]={2,3,5,6,8,9,11};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//9

	if(binarysearch(arr,0,n-1,key)==false){
		cout<<"elemrnt is not prsent"<<endl;
	}

	
	return 0;

}