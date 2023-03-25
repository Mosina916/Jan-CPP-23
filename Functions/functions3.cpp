#include<iostream>
using namespace std;

// forward decleartion
// int sum(int a,int b){
	
// 	int sum=a+b;//8
// 	return sum;

// }
// int sum(int a,int b,int c){
	
// 	int sum=a+b+c;//8
// 	return sum;

// }
// int sum(int a,int b,int c,int d){
	
// 	int sum=a+b+c+d;//8
// 	return sum;

// }
int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0){
	return a+b+c+d+e+f;
}
int main(){
	cout<<sum(1,2)<<endl;
	cout<<sum(1,2,4)<<endl;
	cout<<sum(5,1,2,4)<<endl;
	
	return 0;
}
