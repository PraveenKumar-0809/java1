#include<stdio.h>
#include<limits.h>
int minmax(it arr[],int max_min[],int i,j){
	if(i==j){
		if(arr[i]<max_mix[0]) max_min[0]=arr[i];
		if(arr[i]>max_min[0]) max_min[1]=arr[j];
	}
	else if(i==j-1){
		if(arr[i]<max_min[j])
			if(arr[i]<max_min[0]) max_min[0]=arr[i];
			if(arr[i]> max_min[1]) max_min[1]=arr[j];
		
	}
}
void main(){
	int n;
	printf("enter the size:");
	int arr[n];
	printf("enter the array:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		int max_min[2]={INT_MAX,INT_MIN};
		minmax(arr,max_min,0,n-1);
		printf("%d %d",max_min[0],max_min[1]);
	
	}
}
