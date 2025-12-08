#include<stdio.h>
int main(){
	int n,i,found=0;
	printf("enter the no.of elements in array:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("arr[%d]={",n);
	for(i=0;i<n;i++){
		printf("%d,",arr[i]);
	}
	printf("}");
	int p;
	printf("\nenter the element which u want to know:");
	scanf("%d",&p);
	for(i=0;i<n;i++){
		if(arr[i]==p){
			printf("the position of the element in searching is:%d\n",i+1);
			printf("the index of the elment is:%d\n",i);
			found++;
		}	
	}
	if(found==0){
		printf("element %d is not found",p);
	}
	return 0;
	
}
