#include<stdio.h>
int main(){
	int u;
	int t;
	int a;
	printf("enter the intial velocity:");
	scanf("%d",&u);
	printf("\nenter the  time taken:");
	scanf("%d",&t);
	printf("\nenter the accleration:");
	scanf("%d",&a);
	int d=((u*t)+(0.5)*a*t*t);
	printf("the distance using formula is:%d",d);
	return 0;
	
	
	
}
