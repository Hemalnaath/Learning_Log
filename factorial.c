//factorial
#include<stdio.h>
int n;
int fact(int n){
if(n==0)
    return 1;
else
    return n*fact(n-1);
}
int main(){
printf("Enter the number for which you want to find factorial: ");
scanf("%d",&n);
printf("%d",fact(n));
return 0;
}
