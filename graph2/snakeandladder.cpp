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
	// void addedge(U u,U v,bool birdir=true){//0 1
	void addedge(U u,U v,bool birdir=false){//0 1
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



	// void distancetoeverynopdefromsrc(U src){
	// 	queue<U> q;
	// 	q.push(src);
	// 	unordered_map<U,bool> visited;
	// 	unordered_map<U,int> distance;
	// 	visited[src]=true;
	// 	distance[src]=0;

	// 	while(!q.empty()){
	// 		U p=q.front();
	// 	q.pop();
	// 	cout<<p<<" ";
	// 	for(auto ne:h[p]){
	// 		if(!visited[ne]){
	// 			q.push(ne);
	// 			visited[ne]=true;
	// 			distance[ne]=distance[p]+1;

	// 		}
	// 	}

	// 	}

	// 	for(auto qr:distance){
	// 		cout<<"distance from "<<src<<" to "<<qr.first<<" is "<<qr.second<<endl;
	// 	}
		

	// }


	int srctodestdist(U src,U dest){
		queue<U> q;
		q.push(src);
		unordered_map<U,bool> visited;
		unordered_map<U,int> distance;
		unordered_map<U,U> parent;
		parent[src]=src;
		visited[src]=true;
		distance[src]=0;

		while(!q.empty()){
			U p=q.front();
		q.pop();
		// cout<<p<<" ";
		for(auto ne:h[p]){
			if(!visited[ne]){
				q.push(ne);
				visited[ne]=true;
				distance[ne]=distance[p]+1;
				parent[ne]=p;

			}
		}

		}

		// path print
		U d=dest;
		while(dest!=src){
			cout<<dest<<"<--";//4 3<--
		dest=parent[dest];//2

		}
		cout<<dest<<endl;
		

		return distance[d];
		

	}


};
int main(){
	Graph<int> g;
	int board[42] = {0};
	 	board[2] = 13;
	  	board[5] = 2;
	   board[9] = 18; 
	   board[18] = 11; 
	   board[17]=-13; 
	   board[20] = -14; 
	   board[24] = -8; 
	   board[25] = 10; 
	   board[32] = -2; 
	   board[34] = -22;

	   for(int sr=0;sr<=35;sr++){
	   	 for(int dice=1;dice<=6;dice++){
	   	int des=sr+dice+board[sr+dice];
	   g.addedge(sr,des);


	   }
	   

	   }

	   cout<<g.srctodestdist(0,36)<<endl;


	  
	
	


	

	return 0;
}