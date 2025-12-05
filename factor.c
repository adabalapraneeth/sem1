#include<stdio.h>
int main(){
	int a,i,factor=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		factor=factor*i;
	}
	printf("%d",factor);
	return 0;
}
