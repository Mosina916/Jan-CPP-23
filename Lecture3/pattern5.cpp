#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//5
	int rowno=1;
	while(rowno<=tr){
		// =====================================
	// rowno 2
	// spaces
	int i=1;
	while(i<=rowno-1){
		cout<<' ';
		i=i+1;
	}
	// stars
	int j=1;
	while(j<=2*(tr-rowno)+1){
		cout<<'*';
		j=j+1;

	}
	cout<<endl;
	rowno=rowno+1;



	// =====================================

	}
	
		


	



	return 0;
}