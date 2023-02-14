#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//5
	int rowno=1;
	while(rowno<=tr){
			// =====================================
	// rownno 2
	// spaces
	int i=1;
	while(i<=tr-rowno){
		cout<<' ';
		i=i+1;

	}

	// stars
	int j=1;
	while(j<=rowno){
		cout<<'*';
		j=j+1;
	}
	cout<<endl;
	rowno=rowno+1;
// =====================================


	



	}
	
	





	return 0;
}