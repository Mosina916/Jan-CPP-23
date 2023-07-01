#include<iostream>
#include <stack>
using namespace std;

void stockspan(int *arr,int n){
	stack<int> s;
	int *narr=new int[n];
	for(int i=0;i<n;i++){
		while(!s.empty() and arr[i]>=arr[s.top()]){
			s.pop();
		}
		
	if(s.empty()){
		narr[i]=i+1;
	}
	else{
		narr[i]=i-s.top();

	}
	s.push(i);

	}

	for (int i = 0; i <=n-2; ++i)
		 {
		 	cout<<narr[i]<<" ";
		 }
		 cout<<narr[n-1]<<" "<<"END"<<endl;
		
	

	

}
int main(){

	
	int arr[1000000];
		int n;
		cin>>n;
		for (int i = 0; i <n; ++i)
		 {
		 	cin>>arr[i];//3 1 2 6 4 9 2 5 3 13 6 4
		 } 
		stockspan(arr,n);
		 

	

	return 0;
}