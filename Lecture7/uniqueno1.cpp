#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//9

	int no;
	cin>>no;//2
	int ans=no;//2



// loop
	int i=1;
	while(i<=n-1){
		cin>>no;//1
	ans=ans^no;
	i=i+1;


	}


	cout<<"unique no is "<<ans<<endl;
	
	

	return 0;
}