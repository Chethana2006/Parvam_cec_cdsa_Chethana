#include<stdio.h>
int main(){
    int num, rev=0, org;
    printf("enter a number to be reversed:");
    scanf("%d", &num);
    // while(condition)
    org = num;
    printf("entered number: %d\n", num);
    while(num>0){
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    printf("reversed number: %d\n", rev);
    if(org == rev){
        printf("the given number is a palidrome.");
    }
else{
    printf("the given number is not a palidrome.");
}
}