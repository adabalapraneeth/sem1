#include<stdio.h>
int main()
{
	int a;
	printf("enter a number either postive or negative or zero:");
	scanf("%d",&a);
	if(a>0){
		printf("it is a positive number");
	}
	else if(a<0){
		printf("it is a negative number");
		
	}
	else{
		printf("it is zero");
	}
	return 0;
}
