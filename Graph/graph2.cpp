#include<iostream>
#include<list>
#include<queue>
#include <unordered_map>
using namespace std;
template<typename U>
class Graph{
	// unordered_map<string,list<string> > h;
	// unordered_map<int,list<int> > h;
	unordered_map<U,list<U> > h;
public:
	

	// void addedge(string u,string v,bool birdir=false){//0 1
	// void addedge(int u,int v,bool birdir=true){//0 1
	void addedge(U u,U v,bool birdir=true){//0 1
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

	void bfs(U x){
		queue<U> q;
		q.push(x);
		unordered_map<U,bool> visited;
		visited[x]=true;

		while(!q.empty()){
			U p=q.front();
		q.pop();
		cout<<p<<" ";
		for(auto ne:h[p]){
			if(!visited[ne]){
				q.push(ne);
				visited[ne]=true;

			}
		}

		}
		

	}



	void distancetoeverynopdefromsrc(U src){
		queue<U> q;
		q.push(src);
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;
		visited[src]=true;
		distance[src]=0;

		while(!q.empty()){
			U p=q.front();
		q.pop();
		cout<<p<<" ";
		for(auto ne:h[p]){
			if(!visited[ne]){
				q.push(ne);
				visited[ne]=true;
				distance[ne]=distance[p]+1;

			}
		}

		}

		for(auto qr:distance){
			cout<<"distance from "<<src<<" to "<<qr.first<<" is "<<qr.second<<endl;
		}
		

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

	// g.addedge("modi","trump",true);
	// g.addedge("putin","trump");
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("prabhu","modi");
	// g.addedge("modi","yogi",true);
	// g.addedge("yogi","prabhu");
	// g.addedge("pope","");
	
	g.printgraph();
	// g.bfs(0);
	g.distancetoeverynopdefromsrc(2);

	


	

	return 0;
}