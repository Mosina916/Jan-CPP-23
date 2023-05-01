#include<iostream>
using namespace std;
int multab(int a,int b){
	// base case
	if(b==0){
		return 0;
	}
	 // /rec case
	return a+multab(a,b-1);
}

int main(){
	int a,b;
	cin>>a>>b;//
	cout<<multab(a,b)<<endl;


	return 0;
}