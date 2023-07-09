#include<iostream>
// #include<unordered_map>
#include<map>
using namespace std;
int main(){
	// unordered_map<key,value> h;
	// unordered_map<string,string> h;
	map<string,string> h;
	h["mango"]="yellow";
	h["banana"]="yellow";
	h["kiwi"]="green";


	for(auto p:h){
		cout<<p.first<<"--> "<<p.second<<endl;

	}




	return 0;
}