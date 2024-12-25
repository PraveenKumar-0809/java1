#include<stdio.h>
int max(int a,int b){

return a>b?a:b;
}
int min(int a,int b){

return a<b?a:b;
}
float median(int arr1[],int arr2[],int n)
{
float m1,m2;
if(n==1)
return (float)(arr1[0]+arr2[0])/2;
if(n==2)
return (float)(max(arr1[0],arr2[0])+min(arr1[1],arr2[1]))/2;
if(n%2==0)
{
m1=(arr1[n/2]+arr1[(n/2)-1])/2;
m2=(arr2[n/2]+arr2[(n/2)-1])/2;

//DESIGN AND ANALYSIS OF ALGORITHM-21PE05

//717822P237-Nithyashree
}
else
{

}
m1=arr1[n/2];
m2=arr2[n/2];
if(m1==m2)
return m1;
else if(m1<m2)
{
if(n%2==0){
return median(arr1+n/2-1,arr2,n-n/2+1);
return median(arr1+n/2,arr2,n-n/2);
}
}
else
{
if(n%2==0){
return median(arr1,arr2+n/2-1,n-n/2+1);
return median(arr1,arr2+n/2,n-n/2);
}
}
}



void main()
{
int n,i;
printf("Enter no. of elements: ");
scanf("%d",&n);
int arr1[n],arr2[n];
printf("Enter first array: \n");
for(i=0;i<n;i++)
scanf("%d",&arr1[i]);
printf("Enter second array: \n");
for(i=0;i<n;i++)
scanf("%d",&arr2[i]);
printf("The median of two arrays is : %.1f",median(arr1,arr2,n));
}
