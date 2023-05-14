#include<iostream>
using namespace std;
// merge 2 sorted arrays
void mergetwosortedarray(int arr1[],int arr2[],int a1,int a2){
	int temp[100000];
	int i=0,j=0,k=0;

	while(i<a1 and j<a2){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;
	}
	else{
		temp[k]=arr2[j];
		j++;
		k++;
	}


	}

	// cop karo 2nd array ko agar pehli khatam huvi hai
	while(j<a2){
		temp[k]=arr2[j];
		j++;
		k++;
	}

		// cop karo ist array ko agar 2nd khatam huvi hai
	while(i<a1){
		temp[k]=arr1[i];
		i++;
		k++;
	}


	for(int l=0;l<a1+a2;l++){
		cout<<temp[l]<<" ";
	}
	cout<<endl;
	
}

// merge sort


int main(){
	int arr1[]={2,5,7,8,9};
	int arr2[]={8,9,11,12};
	int a1=sizeof(arr1)/sizeof(int);
	int a2=sizeof(arr2)/sizeof(int);
	// merge --> o/p sorte 2 5 7 8 8 9 9 11 12
	mergetwosortedarray(arr1,arr2,a1,a2);





	return 0;
}