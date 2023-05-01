#include<iostream>
using namespace std;
bool staircasesearch(int arr[4][4],int tr,int tc,int key){

	int r=0,c=tc-1;
	while(r<=tr-1 and c>=0){
		if(arr[r][c]==key){
			cout<<"key is present at index "<<r<<" "<<c<<endl;
			return true;

		}
		else if(arr[r][c]>key){
			c--;
		}
		else{
			r++;
		}
	}

	return false;
}

int main(){

	int arr[4][4]={
		{1,2,3,7},
		{2,3,4,9},
		{3,4,6,10}
	};

	int r=3;
	int c=4;
	int key;
	cin>>key;
	if(staircasesearch(arr,r,c,key)==false){
		cout<<"key not found"<<endl;
	}

	




	return 0;
}