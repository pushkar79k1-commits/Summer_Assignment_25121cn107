//WRITE A PROGRAM TO FIND PRODUCT OF A DIGIT
#include<stdio.h>
int main(){
    int num,d,product=1;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0){
        d=num%10;
        product=product*d;
        num=num/10;
        printf("the produt of a digit of a number%d",product);
    }
    return 0;
}