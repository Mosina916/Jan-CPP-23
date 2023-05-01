#include<iostream>
using namespace std;
void multiply(int arr[10000],int multno,int &nopti){
	int carry=0;
	for(int j=0;j<nopti;j++){//2
		int product=(multno*arr[j])+carry;
		arr[j]=product%10;
		carry=product/10;
	}
	while(carry>0){
			arr[nopti]=carry%10;//76%10==6
	nopti++;
	carry=carry/10;//7

	}

}
void factorial(int n){
	int arr[10000];
	int nopti=1;
	arr[0]=1;
	for(int i=1;i<=n;i++){
		multiply(arr,i,nopti);
	}

	// array print reverse
	for(int k=nopti-1;k>=0;k--){
		cout<<arr[k];
	}
	cout<<endl;


}
int main() {
	int n;
	cin>>n;//6

	factorial(n);



	return 0;
}