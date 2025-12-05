#include<stdio.h>
int main(){
	int a,b,c,d,r;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	printf("enter r:");
	scanf("%d",&r);
	float average=(a+b+c+d+r)/5;
	printf("the average is: %f",average);
	return 0;
	
}
