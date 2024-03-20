#include<stdio.h>
int main(){
	int m,n,p,i,j,k;
	int a[m][n],b[n][p],c[m][p];
	printf("enter 1st matrix dimensions:");
	scanf("%d%d",&m,&n);
	printf("enter 2nd matrix dimensions:");
	scanf("%d%d",&n,&p);
	printf("enter elements in matrix1");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrix elements:");
	for(i=0;i<n;i++){
		for(j=0;j<p;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			c[i][j]=0;
			for(k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("the resultant matrix:\n");
	for(i=0;i<m;i++){
		for(j=0;j<p;j++){
			printf("%d",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
