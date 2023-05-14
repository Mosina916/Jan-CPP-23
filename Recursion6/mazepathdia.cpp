#include<iostream>
#include <vector>
using namespace std;

int mazepath(int cr,int cc,int tr,int tc,string ans){
	// base casec
	if(cr==tr and cc==tc){
		cout<<ans<<" ";
		return 1;
	}
	if(cr>tr || cc>tc){
		return 0;
	}

	// rec case
	int b=mazepath(cr+1,cc,tr,tc,ans+'V');
	int a=mazepath(cr,cc+1,tr,tc,ans+'H');
	int c=mazepath(cr+1,cc+1,tr,tc,ans+'D');
	
	return a+b+c;


}
int main(){
	int tr,tc;
	cin>>tr>>tc;
	int x=mazepath(0,0,tr-1,tc-1,"");
	cout<<endl<<x<<endl;
	


	return 0;
}