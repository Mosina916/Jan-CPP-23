#include<iostream>
using namespace std;
int main(){
	// int a=10;
	float f=90.34;
	// double d=45.234;
	// bool b=true;

	// cout<<&a<<endl;
	// cout<<&f<<endl;
	// cout<<&d<<endl;
	// cout<<&b<<endl;
	// cout<<a<<endl;
	// cout<<f<<endl;
	// cout<<d<<endl;
	// cout<<b<<endl;

	// cout<<sizeof(a)<<endl;
	// cout<<sizeof(f)<<endl;
	// cout<<sizeof(d)<<endl;
	// cout<<sizeof(b)<<endl;
	// cout<<sizeof(&a)<<endl;
	// cout<<sizeof(&f)<<endl;
	// cout<<sizeof(&d)<<endl;
	// cout<<sizeof(&b)<<endl;
	float* ptr=&f;//single pointer
	float**c=&ptr;//double pointer
	float***x=&c;//triple pointer

	cout<<(*(*(*x)))<<endl;

	cout<<f<<endl;


	// cout<<ptr<<endl;
	// cout<<c<<endl;
	// cout<<x<<endl;

	// int*p=&a;
	// bool*bptr=&b;
	// double*dptr=&d;

	// cout<<p<<endl;
	// cout<<&a<<endl;


	// char ch='S';
	// // char ch2='A';
	// 	// cout<<&ch2<<endl;
	// cout<<&ch<<endl;//address
	// cout<<(int*)&ch<<endl;//fooling of compiler 
	// cout<<(void*)&ch<<endl;
	// co
	// cout<<ch<<endl;//s
	// cout<<sizeof(ch)<<endl;//1
	// cout<<sizeof(&ch)<<endl;//8


















	return 0;
}