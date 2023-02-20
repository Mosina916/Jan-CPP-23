#include<iostream>
using namespace std;
int main(){
	int init;
	int final;
	int step;

	cin>>init>>final>>step;

	int f=init;//0
	while(f<=final){
		// int c=(5/9)*(f-32);
		int c=float(5)/9*(f-32);//explicit type conversion

		// int c=(5.0/9.0)*(f-32);
		// int c=(5/9.0)*(f-32);
		// int c=5*(f-32)/9;
		cout<<f<<"   "<<c<<endl;//0    -17
		f=f+step;	//20		  
	}

	// intilization
	// while(condition){
		// task
		// updation
	// }




	return 0;
}