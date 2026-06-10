//WRITE PROGRAM TO CHEEK THE  WHETHER NUMBER IS PALINDROME
#include<stdio.h>
int main(){
    int num,n,d,reverse=0;
    printf("enter a number");
    scanf("%d",&num);
    num=n;
    while(num!=0){
        d=num%10;
        reverse=reverse*10+d;
        num=num/10;
    }
        if(n=reverse){
            printf("enter a number is palindrome"); 
    }
    else{
        printf("enter anumber is not a palindrome");
    }
    return 0;
}