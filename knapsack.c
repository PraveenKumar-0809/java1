#include<stdio.h>
int knapsack(int n,int weight[],int profit[],int capacity){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			int x=profit[j]/weight[j];
			int  y=profit[j+1]/weight[j+1];
			if(x<y){
				t=profit[j];
				profit[j]=profit[j+1];
				profit[j+1]=t;
				t=weight[j];
				weight[j]=weight[j+1];
				weight[j+1]=t;
				int total=0;
				for(i=0;i<n;i++){
					if(capacity-weight[i]>=0){
						capacity-=weight[i];
						total+=profit[i];
					}
					else{
						double x=(double)capacity/(double)weight[i];
						capacity-=(weight[i]*x)
						total+=(profit[i]*x);
					}
				}\
				return total;
				
			}
		}
	}
}
void main(){
	int n,i,weight[n],profit[n],capacity;
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the weight:");
	for(i=0;i<n;i++){
	scanf("%d",&weight[i]);
}
for(i=0;i<n;i++){
	scanf("%d",&profit[i]);
}
printf("enter the capacity:");
scanf("%d",&capacity);
knapsack(n,weight,profit,capacity);


	
}
