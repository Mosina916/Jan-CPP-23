#include<iostream>
using namespace std;
class Queue{
	int *arr;
	int cs;
	int ts;
	int f;
	int r;

public:
	Queue(int s=5){
		arr=new int[s];
		cs=0;
		ts=s;
		f=0;
		r=-1;
	}
	// push 
	void push(int d){
		if(cs<=ts-1){
			r=(r+1)%ts;
			arr[r]=d;
			cs++;
		}
		else{
			cout<<"overflow"<<endl;
		}
	}


	// pop
	void del(){
		if(cs>0){
			f=(f+1)%ts;
			cs--;
		}
		else{
			cout<<"underflow"<<endl;
		}
	}


	// front
	int front(){
		if(cs>0){
			return arr[f];

		}
		
	}
	// empty
	bool empty(){
		return cs==0;
	}

	// size
	int size(){
		return cs;
	}


};
int  main(){
	Queue q;
	q.push(40);
	q.push(50);
	q.push(70);
	q.push(82);
	q.push(22);

	while(!q.empty()){
		cout<<q.front()<<' ';
	q.del();


	}
	

	


	return 0;
	}
