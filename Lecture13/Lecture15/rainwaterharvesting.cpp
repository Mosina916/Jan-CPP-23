#include<iostream>
using namespace std;
int height[1000000];
	int leftmax[1000000];
	int righmax[1000000];
int main() {
	int t;
	cin>>t;//2
	while(t--){

	


	int n;//6
	cin>>n;
	int tw=0;
	for(int i=0;i<n;i++){
		cin>>height[i];
	}
	// left max set
	leftmax[0]=height[0];
	for(int i=1;i<n;i++){
		leftmax[i]=max(leftmax[i-1],height[i]);
	}
	// right max set
	righmax[n-1]=height[n-1];
	for(int i=n-2;i>=0;i--){
		righmax[i]=max(righmax[i+1],height[i]);
	}
	for(int i=0;i<n;i++){
		tw=tw+min(leftmax[i],righmax[i])-height[i];

	}

	cout<<tw<<endl;
	}




	



	return 0;
}