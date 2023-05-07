#include<iostream>
#include <vector>
using namespace std;
bool kyaswaphonachahiye(char inpu[10000],int i,int j){

	for(int k=i;k<j;k++){
		if(inpu[k]==inpu[j]){
		return false;
	}

	}
	




	return true;
}
void permutation(char inpu[10000],int i){
	// base case
	if(inpu[i]=='\0'){
		cout<<inpu<<endl;
		return;
	}

	// rec case
	for(int j=i;inpu[j]!='\0';j++){
		bool ans=kyaswaphonachahiye(inpu,i,j);
		if(ans==true){
			swap(inpu[i],inpu[j]);
		permutation(inpu,i+1);
		swap(inpu[i],inpu[j]);//neeche jaane k time jo tumne change ki ans laane k lye wapas aate time unchange-->backtracking

		}
		
	}
	

}

int main(){
	char inpu[10000];
	cin>>inpu;//abc
	permutation(inpu,0);
	
	
	return 0;
}