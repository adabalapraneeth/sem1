#include<stdio.h>
int main(){
	int n;
	int count=0;
	printf("enter the value:");
	scanf("%d",&n);
	int i;
	for(i=2;i<=n;i++){
		if(n%i==0){
			count=count+1;
			
		}
	}
	if(count==1){
		printf("prime number");	
	}
	else{
		printf("not a prime number");
	}
	return 0;
}
