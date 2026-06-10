//WAP TO PRINT MULTIPLACTION TABLE OF A GIVEN NUMBER
#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    printf("multiplaction table of a %d\n",n);
    for(i=1;i<=10;i++){
        printf("%d x %d =%d\n",n,i,i*n);
    }
  return 0;
 }