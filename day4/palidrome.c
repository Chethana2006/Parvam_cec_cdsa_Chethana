#include<stdio.h>
#include<string.h>
int main(){
    char str[20], rev[20];
    printf("enter any word:");
    scanf("%s", str);
    printf("original string: %s\n",str);
    strcpy(rev, str);
    strrev(str);
    printf("reversed string: %s", str);
    if(strcmp(str,rev)==0){
        printf("the given word is a palidrome");
    }
    else{
        printf("the given word is not a palidrome");
    }
}