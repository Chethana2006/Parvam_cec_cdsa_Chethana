#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d", &size);
    int arrOfNum[size];
    printf("enter %d elements into an arry:", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arrOfNum[i]);
    }
    int max, min;
    max = min = arrOfNum[0];
    for(int i=0; i<size; i++){
        if(arrOfNum[i] > max){
            max = arrOfNum[i];
        }
        if(arrOfNum[i] < min){
            min = arrOfNum[i];
        }
    }
    printf("the largest element in the given array is:%d\n", max);
    printf("the smallest element in the given array is:%d\n", min);
}