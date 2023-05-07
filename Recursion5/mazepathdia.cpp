#include<iostream>
#include <vector>
#include<cstring>
using namespace std;
int co=0;
void mazepath(int cr,int cc,int er,int ec,string out){
	// base case
	if(cr==er and cc==ec){
		cout<<out<<" ";
		co++;
		return;

	}
	if(cr>er || cc>ec){
		
		return;

	}
	

	// rec case
	mazepath(cr+1,cc,er,ec,out+'V');
	mazepath(cr,cc+1,er,ec,out+'H');
	mazepath(cr+1,cc+1,er,ec,out+'D');
}

int main(){
	int tr,tc;
	cin>>tr>>tc;//3 3
	string out="";
	mazepath(0,0,tr-1,tc-1,out);
	cout<<endl;
	cout<<co<<endl;

	
	
	return 0;
}