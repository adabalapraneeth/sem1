#include<stdio.h>
int main(){
	int n,count=0,i;
	printf("enter the no.of elements in array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the %d element in arr[%d]:",i+1,n);
		scanf("%d",&arr[i]);
	}
	int a,p;
	printf("enter the element which u want:");
	scanf("%d",&a);
	for(p=0;p<n;p++){
		if(arr[p]==a){
			count=count+1;
		}else{
			continue;
		}
	}
	printf("count of the element %d is %d",a,count);
	return 0;
	
	
	
	
	
}
