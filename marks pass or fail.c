#include<stdio.h>
int main (){
	char a[50];
	printf("enter the name of the student:");
	scanf("%[^\n]",&a);
	int sub1,sub2,sub3; 
	printf("enter the marks in sub1:");
	scanf("%d",&sub1);
	printf("\nenter the marks in sub2:");
	scanf("%d",&sub2);
	printf("\nenter the marks in sub3:");
	scanf("%d",&sub3);
	if(sub1>=35&&sub2>=35&&sub3>=35){
		printf("the student of aditya university:%s",a);
		printf("\nthe student  has passed the exam");	
	}
	else{
		printf("the student of aditya university :%s",a);
		printf("\nthe student did not pass exam");
	}
	return 0;
}
