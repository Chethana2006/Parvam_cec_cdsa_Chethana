#include<stdio.h>
int main(){
    int num;
    printf("enter the range to print numbers:");
    scanf("%d", &num);
    // for(Initialisation; Condition; Increment/Decrement)
    printf("the numbers between 0 to %d are as follows:\n", num);
    for(int i=0; i<=num; i++){
        printf("%d\n",i);
    }
}