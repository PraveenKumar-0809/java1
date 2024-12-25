#include<stdio.h>
int quicksort(int a[],int low,int high){
	int i,j,pivot,t;
	while(low<high){
		i=low;
		pivot=low;
		j=high;
		while(i<j){
			while(a[i]<=a[pivot] && i<high)
				i++;
			
			while(a[j]>a[pivot] && j>low)
				j--;
			if(i<j){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
		t=a[pivot];
		a[pivot]=a[j];
		a[j]=t;
		quicksort(a,low,j-1);
		quicksort(a,j+1,high);
	}
}
void main(){
	int n,i,a[n];
	scanf("%d",&n);
	printf("enter the size:");
	printf("enter the array:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		quicksort(a,0,n-1);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
	}
