#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int cou=0;

	while(n!=0){
		// last digit nikalo
		if((n&1)==1){
			cou=cou+1;
		}
		// last digit remove
		n=n>>1;
	}
	cout<<cou<<endl;

	return 0;
}