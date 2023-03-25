#include<iostream>
using namespace std;
// function syntax
// returntype nameoffunction(){
// 	// task
// }

void statements(){
	cout<<"hello "<<endl;
	cout<<"hii"<<endl;
	cout<<"coding"<<endl;
	cout<<"blocks "<<endl;

}
int sum(){
	int a,b;
	cin>>a>>b;
	int sum=a+b;//8
	cout<<sum<<endl;
	return sum;

}
// multiplication(int x,int y,int z,char ch,float f)
float multiplication(int x,int y,float z){
	// float m=x*y*z;
	return x*y*z;
}
void divide(int a,int b){
	int ans=a/b;
	cout<<ans<<endl;
}
int main(){
	cout<<sum()<<endl;
	// multiplication(3,2,4,'A',9.7);
	cout<<multiplication(3,2,4.3)<<endl;
	divide(8,4);
	// for(int i=1;i<=5;i++){
	// cout<<"hello "<<endl;
	// cout<<"hii"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"blocks "<<endl;

	// }

	cout<<30<<endl;
	// nameoffunction();syntax to calla function
	statements();//function call function invoke
	// cout<<"hello "<<endl;
	// cout<<"hii"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"blocks "<<endl;
	cout<<20<<endl;

	cout<<30<<endl;
	cout<<20<<endl;
	statements();
	// cout<<"hello "<<endl;
	// cout<<"hii"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"blocks "<<endl;


	// cout<<"hello "<<endl;
	// cout<<"hii"<<endl;
	// cout<<"coding"<<endl;
	// cout<<"blocks "<<endl;
	statements();
	cout<<30<<endl;
	cout<<20<<endl;

	// return 0;
}