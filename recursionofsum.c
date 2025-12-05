#include<stdio.h>
int add(int n){
    if(n==0){
      return 0;

    }else{
        return n+add(n-1);
    }
}
int main(){
    int n,sum;
    printf("enter the number:");
    scanf("%d",&n);
    sum=add(n);
    printf("%d",sum);
    return 0;
}