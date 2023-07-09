#include<iostream>
#include<queue>
using namespace std;
void printheap(priority_queue<int,vector<int>,greater<int> > h){
	while(!h.empty()){
		cout<<h.top()<<" ";
		h.pop();
	}
}
int main(){
	priority_queue<int,vector<int>,greater<int> > h;
	int k;
	cin>>k;//3
	// 3 60 45 8 -1 9 -1
	int c=1;
	while(1){
		int no;
		cin>>no;//-1
		if(c<=k){
			h.push(no);
			c++;

		}
		else{
			if(no>h.top()){
				h.pop();
				h.push(no);

			}
			if(no==-1){
				// heap print 
				printheap(h);
			}


		}
		
		
	}

	return 0;
}