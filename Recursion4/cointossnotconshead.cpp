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
	if(out.length()==0||out[out.length()-1]!='H'){
		cointoss(n-1,out+'H');
	}
	cointoss(n-1,out+'T');
}
int main(){
	int n;
	cin>>n;//3
	string out="";
	cointoss(n,out);
	
	return 0;
}