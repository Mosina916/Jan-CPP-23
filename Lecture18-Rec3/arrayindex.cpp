#include<iostream>
using namespace std;
bool present7ornot(int *arr,int n,int i){

	// base case
	if(i==n){
		return false;
	}


	// rec case
	if(arr[i]==7){
		cout<<"7 is prsent at index "<<i<<endl;
		return true;
	}
	return present7ornot(arr,n,i+1);


}

// int firstindex(int *arr,int n,int i){

// 	// base case
// 	if(i==n){
// 		return -40;
// 	}


// 	// rec case
// 	if(arr[i]==7){
// 		return i;
// 	}

// 	return firstindex(arr,n,i+1);

// }


int lastindex(int *arr,int n,int i){

	// base case
	if(i==-1){
		return -20;
	}
	

	// rec case
	if(arr[i]==7){
		return i;
	}
	return lastindex(arr,n,i-1);
	

}
// all indexes of 7
void allindices(int *arr,int n,int i){
	// base case
	if(i==n){
		return;

	}
	// case
	if(arr[i]==7){
		cout<<i<<" ";
	}
	allindices(arr,n,i+1);
}

int main(){
	// int arr[]={3,4,2,9,1};
	int arr[]={7,6,7,2,7,1,7,8};
	int n=sizeof(arr)/sizeof(int);
	// allindices(arr,n,0);

	
		
	if(lastindex(arr,n,n-1)<0){
		cout<<"7 is not present"<<endl;
	}
	else{
		cout<<"7 is present at last index "<<lastindex(arr,n,n-1)<<endl;

	}


	// int x=firstindex(arr,n,0);
	// if(x<0){
	// 	cout<<"7 is not present"<<endl;
	// }
	// else{
	// 	cout<<"7 is present at index "<<x<<endl;

	// }

	// int n=sizeof(arr)/sizeof(int);
	// if(present7ornot(arr,n,0)==false){
	// 	cout<<"7 is not prsent"<<endl;
	// }






}