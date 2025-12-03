#include<stdio.h>
#include<string.h>
int main(){
	printf("PROGESS REPORT OF THE STUDENTS:");
	int a,p,v,value=0,j,king;
	printf("\nenter the no.of the students:");
	scanf("%d",&a);
	char c[a][20];	
	for(p=0;p<a;p++){
		printf("enter the name of %d  student:",p+1);
		scanf("%s",c[p]);
	}
	//printf("\nenter the marks of each students:");
	int pra[a];
	printf("\nenter the marks of each students:");
	for(j=0;j<a;j++){
		printf("\nenter the marks of student %d:",j+1);
		scanf("%d",&pra[j]);
	}
	for(v=0;v<a;v++){
		printf("%d. %s %d\n",v+1,c[v],pra[v]);
	}
	for(j=0;j<a;j++){
		if(pra[j]>value){
			value=pra[j];
			king=j;
		}else{
			continue;
		}
	}
	printf("the  top marks %d  %s",value,c[king]);
	return 0;
}

