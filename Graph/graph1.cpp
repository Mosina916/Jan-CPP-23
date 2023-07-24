#include<iostream>
#include<list>
using namespace std;
class Graph{
	// int *arr=new int[size]
	list<int> *arr;
	int n;
public:
	Graph(int s=5){
		arr=new list<int> [s];
		n=s;

	}

	void addedge(int u,int v,bool birdir=true){//0 1
		arr[u].push_back(v);
		if(birdir){
			arr[v].push_back(u);

		}
		

	}


	void printgraph(){
		for(int i=0;i<n;i++){
			cout<<i<<" --> ";
			for(auto x:arr[i]){
				cout<<x<<" ";
			}
			cout<<endl;
		}

	}


};
int main(){
	Graph g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(3,2);
	g.addedge(1,2);

	g.printgraph();
	


	

	return 0;
}