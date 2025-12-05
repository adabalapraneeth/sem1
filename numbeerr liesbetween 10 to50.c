#include<stdio.h>
int main (){
	int a;
	printf("enter the value of a:");
	scanf("%d",&a);
	if(a>=10&&a<=50){
		printf("the entered number lies between 10 to 50");	
	}
	else{
		printf("the entered number does'nt lies between 10 to 50");
	}
	return 0;
}
