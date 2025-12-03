#include<stdio.h>
int main(){
	int a, b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enterr the value of b:");
	scanf("%d",&b);
	printf("the addition of two numbers:%d",a+=b);
	printf("\nthesubtraction of two numbers:%d",a-=b);
	printf("\nthe mulplication of two numbers:%d",a*=b);
	printf("\nthe division of two numbers :%d",a/=b);
	
}
