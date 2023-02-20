#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//
	int rowno=1;
	while(rowno<=tr){
	// rowno3
	// spaces
	int i=1;
	while(i<=tr-rowno){
		cout<<' '<<'\t';
		i=i+1;
	}
	// inc no-->*
	int sno=rowno;
	int j=1;
	while(j<=rowno){
		// cout<<'*';
		cout<<sno<<'\t';
		sno=sno+1;//4
		j=j+1;//4
	}
	// sno-->4
	sno=sno-2;//2
	// dec no-->#
	int l=1;
	while(l<=rowno-1){
		// cout<<'#';
		cout<<sno<<'\t';
		sno=sno-1;
		l=l+1;
	}

	cout<<endl;
	rowno=rowno+1;

	}

	// rowno1 to rowno5 it is showing symmetry



	
	
	

	
	
	





	return 0;
}