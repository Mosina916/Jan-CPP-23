#include<iostream>
using namespace std;
class car{
	// private by default
	string name;
	int seats;
	int tyre;
	string colour;
	// default consturctor
	// car(){

	// }

	// car(){
	// 	cout<<"hello"<<endl;
		
	// }
public:

	// parameterized constructor
	car(string n,int t,int s,string c){
		cout<<"coding"<<endl;
		name=n;
		tyre=t;
		seats=s;
		colour=c;
	}

	// ~car(){
	// 	cout<<"hii"<<endl;

	// }
	void print(){
		cout<<name<<endl;
		cout<<tyre<<endl;
		cout<<seats<<endl;
		cout<<colour<<endl;

	}


};
int main(){
	// car x;//x will be an object/varibale of type car
	// car y;
	// // whenever object is created constructor is called
	// x.name="bmw";
	// x.seats=4;
	// x.tyre=4;
	// x.colour="black";
	car x("bmw",4,4,"black");
	// car y("creta",4,4,"black");
	x.print();
	car A(x);//copy constructor

	A.print();

	// cout<<x.name<<endl;
	// cout<<x.seats<<endl;
	// cout<<x.tyre<<endl;
	// cout<<x.colour<<endl;




	
	return 0;
}