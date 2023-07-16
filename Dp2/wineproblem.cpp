 #include<iostream>
using namespace std;
int wineproblem(int price[],int year,int i,int j){
	// base case
	if(i>j){
		return 0;
	}

	// rec case
	int op1=year*price[i]+wineproblem(price,year+1,i+1,j);
	int op2=year*price[j]+wineproblem(price,year+1,i,j-1);
	return max(op1,op2);
}

int tdwineproblem(int price[],int year,int i,int j,int arr[100][100]){
	// base case
	if(i>j){
		return arr[i][j]=0;
	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}

	// rec case
	int op1=year*price[i]+tdwineproblem(price,year+1,i+1,j,arr);
	int op2=year*price[j]+tdwineproblem(price,year+1,i,j-1,arr);
	return arr[i][j]=max(op1,op2);
}


int bottomupwineproblem(int price[],int n){
	int arr[100][100]={0};

	for(int i=0;i<n;i++){
		arr[i][i]=n*price[i];
	}

	for(int x=n-2;x>=0;x--){
	for(int y=0;y<n;y++){
		if(y>x){
		int year=n-(y-x);
		int op1=price[x]*year+arr[x+1][y];
		int op2=price[y]*year+arr[x][y-1];
		arr[x][y]=max(op1,op2);
	}

	}
}

for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<'\t';
		}
		cout<<endl;
	}
	cout<<endl;
	cout<<endl;




return arr[0][n-1];
	
}


int main(){
	int price[]={2,3,5,1,4};
	int n=sizeof(price)/sizeof(int);
	// cout<<wineproblem(price,1,0,n-1)<<endl;
	// int arr[100][100]={2};x
	int arr[100][100];
	memset(arr, -1, sizeof(arr));
	// for (int i = 0; i <n; ++i)
	// {
	// 	for(int j=0;j<n;j++){
	// 		arr[i][j]=-1;
	// 	}
	// 	/* code */
	// }


	// cout<<bottomupwineproblem(price,n)<<endl;

	cout<<tdwineproblem(price,1,0,n-1,arr)<<endl;


	for (int i = 0; i <n; ++i)
	{
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	

	

	return 0;
}