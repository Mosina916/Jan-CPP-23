#include<iostream>
#include<queue>
using namespace std;
#define mh priority_queue<int,vector<int>, greater<int> >
// heap sort

int main(){
	// stack<int> s;
	// priority_queue<int> h;//max heap
	// priority_queue<int,greater<int>,vector<int> >h;
	mh h;
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	
	h.push(0);
	cout<<h.size()<<endl;


	while(!h.empty()){
		cout<<h.top()<<" ";
	h.pop();

	}
	


	return 0;
}