#include<iostream>
#include<vector>
using namespace std;
// vector<int> f(int n){//5
// 	// 1 2 3 4 5
// 	vector<int> v;
// 	for(int i=1;i<n;i++){
// 		v.push_back(i);
// 	}

// 	return v;




// }


int main(){
	// vector<int> v;

	vector<vector<int> > v;

	vector<int> a;
	for(int i=1;i<=5;i++){
		a.push_back(i);
	}
	v.push_back(a);
	vector<int> b;
	for(int i=1;i<=2;i++){
		a.push_back(i);
	}
	v.push_back(b);




}