#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i=2;//initilization
	while(i<=n-1){//condition
		if(n%i==0){
			cout<<"not prime"<<endl;
			break;
		}
		i=i+1;//updation
	}

	
	if(i==n){
		cout<<"prime"<<endl;
	}



	return 0;
}