//write a program to calculate sum of first N netural number
#include<stdio.h>
int main(){
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    } 
    printf("sum of first %d natural number =%d",n,sum);
    return 0;
}