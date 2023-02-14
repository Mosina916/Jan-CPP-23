#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//7
	// upper half
	int rowno=1;
	while(rowno<=(tr+1)/2){
		// rowno 2
	// spaces
	int i=1;
	while(i<=(tr+1)/2-rowno){
		cout<<" ";
		i=i+1;
	}

	// stars
	int j=1;
	while(j<=2*rowno-1){
		cout<<'*';
		j=j+1;
	}

	cout<<endl;
	rowno=rowno+1;

	// =====================================
	// =====================================
	}

// lower half
	// rowno-->5
	while(rowno<=tr){
		// =============================================
	// rowno=6
	// spaces 
	int l=1;
	while(l<=rowno-(tr+1)/2){
		cout<<' ';
		l=l+1;

	}
	// stars
	int k=1;
	while(k<=2*(tr-rowno)+1){
		cout<<'*';
		k=k+1;

	}
	cout<<endl;
	rowno=rowno+1;
	// =============================================

	}
	







	return 0;
}