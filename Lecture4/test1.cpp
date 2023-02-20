#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//4
	int a=1;
	int c;
	int b=1;

	if(tr==1){
		cout<<0<<endl;
		
	}
	else{

		cout<<0<<endl;
		cout<<1<<" "<<1<<endl;
		int rowno=3;
		while(rowno<=tr){
			int i=1;
			while(i<=rowno){
				c=a+b;//2
				cout<<c<<" ";
				a=b;
				b=c;
				i=i+1;
			}
			cout<<endl;
			rowno=rowno+1;
		}

	}
	
	
	





	return 0;
}