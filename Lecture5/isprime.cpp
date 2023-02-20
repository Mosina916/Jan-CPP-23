#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//6
	int i=2;
	while(i<=n-1){
		if(n%i==0){//6%2==0
			cout<<"not prime"<<endl;
			return 0;

		}
		i=i+1;//7

	}

	cout<<n<<" is prime"<<endl;

	return 0;
}