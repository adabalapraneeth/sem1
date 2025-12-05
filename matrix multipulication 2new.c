#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int i,j,k,m,n,p;
	printf("Enter m(row) and n(column) of A matrix :");
	scanf("%d%d",&m,&n);
	printf("Enter p(column) of B matrix : \n");
	scanf("%d",&p);
	printf("Enter elements in a matrix :\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter elements in b matrix :\n");  
	for(i=0;i<n;i++)
	{
		for(j=0;j<p;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			c[i][j]=0;
			for(k=0;k<n;k++)
			{
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<p;j++)
		{
			printf("%d ",c[i][j]);  
		}
		printf("\n");
   	}
    return 0;
}
