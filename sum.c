//Sum of first N natural numbers
#include<stdio.h>
int n;
int sum(int n){
if(n==0)
    return;
else
    return n + sum(n-1);
}
int main(){
printf("Enter the number: ");
scanf("%d",&n);
printf("%d",sum(n));
return 0;
}
