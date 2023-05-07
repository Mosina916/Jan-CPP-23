#include<iostream>
#include <vector>
using namespace std;
void cointoss(int n,string out){
	// base case
	if(n==0){
		cout<<out<<endl;
		return;
	}
	// rec case
	cointoss(n-1,out+'H');
	cointoss(n-1,out+'T');
}
int main(){
	int n;
	cin>>n;
	string out="";
	cointoss(n,out);
	
	return 0;
}