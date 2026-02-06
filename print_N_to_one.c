//Print N to 1
#include<stdio.h>
int n;
int print(int n){
if(n==1)
    return;
else
    printf("%d ",n);
    print(n-1);
}
int main(){
printf("Enter the number: ");
scanf("%d",&n);
printf("%d",print(n));
return 0;
}
