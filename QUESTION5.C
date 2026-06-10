//WRITE A PROGRAM TO FIND SUM OF DIGIT OF A NUMBER 
#include<stdio.h>
int main(){
    int num,d,sum=0;
    printf("enter a number = ");
    scanf("%d",&num);
    while(num!=0){
    d=num%10;
    sum=sum+d;
    num=num/10;
    printf("the sum of digit of a number = %d",sum);
    }
    return 0;
}