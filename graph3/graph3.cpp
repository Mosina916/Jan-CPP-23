#include<iostream>
#include<list>
#include<queue>
#include <unordered_map>
using namespace std;
template<typename U>
class Graph{
	unordered_map<U,list<U> > h;
public:
	void addedge(U u,U v,bool birdir=true){//
		h[u].push_back(v);
		if(birdir){
			h[v].push_back(u);

		}
	}
	void printgraph(){
		for(auto x:h){
			cout<<x.first<<"-->";
			for(auto ne:x.second){
				cout<<ne<<", ";
			}
			cout<<endl;
		}
	}

	// dfs
	void dfs(U src,unordered_map<U,bool> &visited){//0
		// cout<<src<<" ";//0 1
		visited[src]=true;
		for(auto ne:h[src]){
			if(visited[ne]!=true){
				dfs(ne,visited);
			}

		}




	}

	int totalcomponents(U src,unordered_map<U,bool> &visited){
		int comp=1;
		dfs(src,visited);//30 31 32 33
		for(auto x:h){
			if(!visited[x.first]){
				dfs(x.first,visited);//100 200 300
				comp++;

			}

		}
		return comp;

	}


	


};
int main(){
	Graph<int> g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(3,2);
	g.addedge(1,2);

	// 2nd graph
	g.addedge(100,200);
	g.addedge(100,300);


	// 3rd graph
	g.addedge(30,31);
	g.addedge(31,32);
	g.addedge(31,33);
	g.addedge(32,33);

	g.addedge(332,323);
	
	

	g.printgraph();
	unordered_map<int,bool> visited;
	cout<<g.totalcomponents(30,visited)<<endl;



	// unordered_map<int,bool> visited;

	// g.dfs(0,visited);

	

	return 0;
}