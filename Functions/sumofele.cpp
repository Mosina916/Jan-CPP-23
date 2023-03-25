#include<iostream>
using namespace std;
int sum(int b[],int n){
	int ans=0;
	for (int i = 0; i <n; ++i)
	{
		ans+=b[i];
	}
	return ans;


}
int main(){
	int arr[]={4,3,5,7,2};
	int n=sizeof(arr)/sizeof(int);
	

	
	cout<<sum(arr,n)<<endl;
	
		
	return 0;
	
}
