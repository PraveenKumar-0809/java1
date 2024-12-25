#include<stdio.h>
int job(int n,int profit[],int dead[]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(profit[j]<profit[j+1]){
				int t=profit[j];
				profit[j]=profit[j+1];
				profit[j+1]=t;
				t=dead[j];
				dead[j]=dead[j+1];
				dead[j+1]=t;
			}
		}
		int max=0;
		for(i=0;i<n;i++){
			if(max<dead[i]){
				
				max=dead[i];
			}
		}
	}
}
void main(){
	int i,n,profit[n],dead[n];
	printf("enter the size:");
	scanf("%d",&n);
	printf("enter the profit:");
	for(i=0;i<n;i++){
	scanf("%d",&profit[i]);
}
printf("enter the dead:");
for(i=0;i<n;i++){
	scanf("%d",&dead[i]);
	
	printf("%d",job(n,profit,dead));
}
	
}
