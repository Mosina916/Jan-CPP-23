#include<iostream>
#include <vector>
#include<cstring>
using namespace std;
void generateparenthesis(int n,int ob,int cb,string out){
	// base case
	if(cb==n){
		
		cout<<out<<endl;
		return;
	}


	// rec case
	if(ob<n){
		generateparenthesis(n,ob+1,cb,out+'(');

	}

	if(ob>cb){
		generateparenthesis(n,ob,cb+1,out+')');

	}
	

}

int main(){
	int n;
	cin>>n;
	string out="";
	generateparenthesis(n,0,0,out);
	
	
	return 0;
}