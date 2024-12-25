#include<stdio.h>
int binarysearch(int a[],int low,int high,int key){
	
	if(low<=high){
		int mid=(low+high)/2;
		if(a[mid]==mid){
			return mid;
		}	
		else if(a[mid]<key){
			return binarysearch(a,mid+1,high,key);
		}
		else{
			return binarysearch(a,low,mid-1,key);
		}
		}
}
void main(){
	int i,n,x,a[n];
	scanf("%d",&n);
	scanf("%d",&x);
	for(i=0;i<n;i++){
		print("enter the array:");
		scanf("%d",&a[i]);
	}
	int res=binarysearch(a,0,n-1,x);
	if(res==-1){
		printf("element can be found");
	}
	else{
		printf("element cannot be found");
	}
}
