#include<iostream>
#include <stack>
#include <vector>
using namespace std;

void nextgreaterele(int *arr,int n){
	stack<int> s;
	int *narr=new int[n];
	for(int i=n-1;i>=0;i--){
		while(!s.empty() and arr[i]>=s.top()){
		s.pop();
	}

	if(s.empty()){
		narr[i]=-1;
	}
	else{
		narr[i]=s.top();

	}
	s.push(arr[i]);

	}

	for (int i = 0; i <n; ++i)
		 {
		 	cout<<arr[i]<<","<<narr[i]<<endl;
		 }
		
	

	

}
int main(){

	int t;
	cin>>t;
	int arr[1000000];
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		 {
		 	cin>>arr[i];//3 1 2 6 4 9 2 5 3 13 6 4
		 } 
		 nextgreaterele(arr,n);
		 

	}

	return 0;
}