#include<iostream>
using namespace std;
int main(){
	int tr;
	cin>>tr;//1
	if(tr==1){
		cout<<"*"<<endl;
		return 0;
	}
	// ROW 1
	int i=1;
	while(i<=tr-1){
		cout<<' ';
		i=i+1;
	}
	// r1 stars
	int j=1;
	while(j<=tr){
		cout<<'*';
		j=j+1;
	}
	cout<<endl;

	// row no 2 to row no 4
	int rowno=2;
	while(rowno<=tr-1){
		// row no 3
	// spaces
	int l=1;
	while(l<=tr-rowno){
		cout<<' ';
		l=l+1;
	}
	// one star
	cout<<'*';
	// spaces
	int k=1;
	while(k<=tr-2){
		cout<<' ';
		k=k+1;
	}
	// one star
	cout<<'*';
	cout<<endl;
	rowno=rowno+1;

	}

	//row no 5
	int p=1;
	while(p<=tr){
		cout<<'*';
		p=p+1;
	}

	cout<<endl;






	return 0;
}