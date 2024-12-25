#include<stdio.h>
int maxactivity(int n,int start[],int end[]){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(end[j]>end[j+1]){
				int t=end[j];
				end[j]=end[j+1];
				end[j+1]=t;
				t=start[j];
				start[j]=start[j+1];
				start[j+1]=t;
			
			}
		}
	}
	i=1,j=0;
	int cnt=1;
	while(i<n){
		if(end[j]>=start[j+1]){
			
			cnt++;
			i++;
			j++;
		}
		else{
			
			i++;
		}
		return cnt;
	}
}
void main(){
	int n,start[n],end[n],i;
	printf("enter thr size:");
	printf("enter the starting time:");
	for(i=0;i<n;i++){
		scanf("%d",&start[i]);
	}
	printf("enter the ending time:");
	for(i=0;i<n;i++){
		scanf("%d",&end[i]);
	}
	printf("%d",maxactivity(n,start,end));
}
