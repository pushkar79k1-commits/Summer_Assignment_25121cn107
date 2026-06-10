//WRITE A PROGRAM TO REVERSE A NUMBER 
#include<stdio.h>
int main(){
    int num,d,reverse=0;
printf("enter a number");
scanf("%d",&num);
while(num!=0){
d=num%10;
reverse=reverse*10+d;
num=num/10;
printf("the reverse of anumber=%d",reverse);
}
return 0;
}