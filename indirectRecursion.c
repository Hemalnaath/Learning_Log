#include<stdio.h>
int n;
int x=1;
void odd(){
if(x>n){
    return;
}
else{
    printf("%d ",x+1);
    x++;
    even();
}
}

void even(){
if(x>n){
    return;
}
else{
    printf("%d ",x-1);
    x++;
    odd();
}
}
int main(){
    printf("Enter the number of integers: ");
    scanf("%d",&n);
    odd();
    return 0;
}
