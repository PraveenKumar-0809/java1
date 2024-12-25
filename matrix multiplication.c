#include<stdio.h>
void main(){
	int i,j,k,n;
	scanf("%d",&n);
	int m[n][n];
	int s[n][n];
	int c[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&m[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&s[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=(m[i][k]*s[k][j]);
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",c[i][j]);
			printf("\n");
		}
	}
	
	
	
	
}
