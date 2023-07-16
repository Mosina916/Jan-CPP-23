 #include<iostream> 
using namespace std;
// int mincost(int cost[10][10],int i,int j){
// 	if(i==0 and j==0){
// 		return cost[i][j];
// 	}
// 	if(i<0 ||j<0){
// 		return INT_MAX;
// 	}


// 	int op1=mincost(cost,i-1,j);
// 	int op2=mincost(cost,i,j-1);
// 	return min(op1,op2)+cost[i][j];
// }

int tdmincost(int cost[10][10],int i,int j,int arr[100][100]){
	if(i==0 and j==0){
		return arr[i][j]=cost[i][j];
	}
	if(i<0 ||j<0){
		return INT_MAX;
	}

	if(arr[i][j]!=-1){
		return arr[i][j];
	}


	int op1=tdmincost(cost,i-1,j,arr);
	int op2=tdmincost(cost,i,j-1,arr);
	return arr[i][j]=min(op1,op2)+cost[i][j];
}

int main(){
	int cost[10][10]={
		{3,1,4,2},
		{6,2,3,9},
		{1,6,4,2},
		{2,3,1,2}
	};
	// cout<<mincost(cost,3,3)<<endl;
	int arr[100][100];
	for (int i = 0; i <100; ++i)
	{
		for(int j=0;j<100;j++){
			arr[i][j]=-1;
		}
		/* code */
	}

	cout<<tdmincost(cost,3,3,arr)<<endl;

	for (int i = 0; i <4; ++i)
	{
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
		/* code */
	}
	cout<<endl;
	
	

	

	return 0;
}