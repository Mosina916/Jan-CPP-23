#include<iostream>
#include<vector>
using namespace std;
// heap sort

class minheap{
	vector<int>v;
public:
	minheap(){
		v.push_back(-1);
	}
	// insert
	void insert(int d){
		v.push_back(d);

		int child=v.size()-1;
		while(child!=1){
			int parent=child/2;
			if(v[parent]>v[child]){
				swap(v[parent],v[child]);
			}
			child=parent;
		}

	}
	void heapify(int parent){
		int lc=2*parent;
		int rc=lc+1;
		int minindex=parent;
		if(lc<=v.size()-1 and v[minindex]>v[lc]){
			minindex=lc;
		}
		if(rc<=v.size()-1 and v[minindex]>v[rc]){
			minindex=rc;
		}

		if(minindex!=parent){
			swap(v[minindex],v[parent]);
			heapify(minindex);
		}

	}

	void deleteinh(){
		swap(v[1],v[v.size()-1]);
		v.pop_back();
		heapify(1);
	}
	int top(){
		return v[1];
	}
	int size(){
		return v.size()-1;
	}
	bool empty(){
		return v.size()==1;
	}

};
int main(){
	minheap h;
	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(0);


	while(!h.empty()){
		cout<<h.top()<<" ";
	h.deleteinh();

	}
	


	return 0;
}