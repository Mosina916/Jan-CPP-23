#include<iostream>
#include <set>
#include <string>
using namespace std;
// vector<int> v;
set<string> s;
void permutation(char inpu[10000],int i){
	// base case
	if(inpu[i]=='\0'){
		s.insert(inpu);
		// cout<<inpu<<endl;
		return;
	}

	// rec case
	for(int j=i;inpu[j]!='\0';j++){
	
		
			swap(inpu[i],inpu[j]);
		permutation(inpu,i+1);
		swap(inpu[i],inpu[j]);//neeche jaane k time jo tumne change ki ans laane k lye wapas aate time unchange-->backtracking

		
		
	}
	

}

int main(){
	char inpu[10000];
	cin>>inpu;//abc
	permutation(inpu,0);

// print set ki values
	for(auto x=s.begin(); x!=s.end();x++){
		cout<<*x<<endl;
	}
	
	
	return 0;
}