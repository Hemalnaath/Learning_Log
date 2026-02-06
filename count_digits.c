//Count digits of a number
#include<stdio.h>
int n;
int counter=0;
int count(int n){
if(n<0)
    return 1;
else
    n=n/10;
    counter++;
    count(n-1);
}
int main(){
printf("Enter the numbers to count digit: ");
scanf("%d",&n);
count(n);
printf("%d",counter);
return 0;
}
