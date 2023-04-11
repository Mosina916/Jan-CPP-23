#include<iostream>
#include<string>
using namespace std;
bool binarysearch(int arr[],int s,int e,int key){
	// int s=0;
	// int e=n-1;
	while(s<=e){
		int mid=(s+e)/2;
		if(arr[mid]==key){
			cout<<"key is present at "<<mid<<endl;
			return true;
		}
		else if(key>arr[mid]){
			s=mid+1;
		}
		else{
			e=mid-1;
		}

	}
	
	return false;
}
int main(){
	int arr[]={2,3,5,6,8,9,11};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;
	if(binarysearch(arr,0,n-1,key)==false){
		cout<<"elemrnt is not prsent"<<endl;
	}

	// int s=0;
	// int e=n-1;
	// while(s<=e){
	// 	int mid=(s+e)/2;
	// 	if(arr[mid]==key){
	// 		cout<<"key is present at "<<mid<<endl;
	// 		break;
	// 	}
	// 	else if(key>arr[mid]){
	// 		s=mid+1;
	// 	}
	// 	else{
	// 		e=mid-1;
	// 	}

	// }

	// if(s>e){
	// 	cout<<"elemrnt is not prsent"<<endl
	// }



	return 0;
}