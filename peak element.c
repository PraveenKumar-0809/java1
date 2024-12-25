#include<stdio.h>
int peakelement(int a[],int n,int low,int high){
	int mid=(low+high)/2;
	if((mid==0 || a[mid]>=a[mid-1])&&(mid==n-1 || a[mid]<=a[mid+1])) return mid;
	else if(mid>0 && a[mid]<a[mid-1]) return peakelement(a,n,low,mid-1);
	else return peakelement(a,n,mid+1,high);
	}
	

void main(){
	int n,i,a[n];
	scanf("%d",&n);
	printf("enter the size:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
		printf("%d",a[peakelement(a,n,0,n-1)]);
	}
}
