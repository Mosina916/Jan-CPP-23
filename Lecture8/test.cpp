#include<iostream>
using namespace std;
int main(){
	char ch;
	int co=0;
	// cin>>ch;//'h'
	//ignore whitespace
	ch=cin.get();

// loop
	while(ch!='$'){
		co++;//5
	// cin>>ch;//'$'
		ch=cin.get();

	}

	cout<<co<<endl;
	

	return 0;
}