#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//13-->3.605
	int tdp;
	cin>>tdp;//3
	int times=1;
	float step=1;
	float i=0;
	while(times<=tdp+1){//5<=4
		while(i*i<=n){//
		i=i+step;
	}
	i=i-step;//3.605
	times=times+1;//5
	step=step/10;


	}

	cout<<i<<endl;


// int wala part
	
	// while(i*i<=n){//
	// 	i=i+1;
	// }
	// i=i-1;//3

	// pehla dec point
	// while(i*i<=n){
	// 	i=i+0.1;//3.2
	// }
	// i=i-0.1;//3.6


	// 2nd dec point

	// while(i*i<=n){
	// 	i=i+0.01;
	// }
	// i=i-0.01;//3.60

	// 3rd dec point
	// while(i*i<=n){
	// 	i=i+0.001;

	// }
	// i=i-0.001;//3.605

	// cout<<i<<endl;








	


	return 0;
}