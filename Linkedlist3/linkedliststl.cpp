#include<iostream>
#include <list>
using namespace std;

int main(){
	list<int>l;
	l.push_back(3);
	l.push_back(5);
	l.push_back(7);
	l.push_back(2);
	l.push_back(9);

	// l.reverse();
	l.sort();


	for(auto x:l){
		// task
		cout<<x<<" ";

	}

	
	



	return 0;
}