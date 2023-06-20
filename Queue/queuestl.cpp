#include<iostream>
#include<queue>
using namespace std;

int  main(){
	queue<int>q;
	q.push(40);
	q.push(50);
	q.push(70);
	q.push(82);
	q.push(22);

	while(!q.empty()){
		cout<<q.front()<<' ';
	q.pop();


	}
	

	


	return 0;
	}
