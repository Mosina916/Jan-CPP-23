#include<iostream>
#include<list>
#include<queue>
#include <unordered_map>
using namespace std;
template<typename U>
class Graph{
	unordered_map<U,list<pair<U,int> > > h;
public:
	void addedge(U x,U y,int d,bool bird=true){
		h[x].push_back(make_pair(y,d));
		if(bird==true){
			h[y].push_back(make_pair(x,d));

		}

	}


	void printg(){
		for(auto x:h){
			cout<<x.first<<"--> ";
			for(auto p:x.second){

				cout<<'('<<p.first<<','<<p.second<<')'<<" ";

			}
			cout<<endl;


		}

	}



};
int main(){
	Graph<string> g;
	g.addedge("amritsar","jaipur",4);
	g.addedge("jaipur","Delhi",2);
	g.addedge("jaipur","Mumbai",8);
	g.addedge("amritsar","agra",1);
	g.addedge("Delhi","agra",1);
	g.addedge("Mumbai","bhopal",3);
	g.addedge("bhopal","agra",2);

	g.printg();

	




	
	return 0;
}