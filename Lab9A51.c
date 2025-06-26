#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter total numbers that you have to add:");
    scanf("%d",&n);
    int sum = 0;
    int a[n];
    int *ptr;
    ptr = &a[0];
    for(int i=0;i<n;i++){
        scanf("%d",ptr);
        sum+=*ptr;
        ptr++;
    }
    printf("sum=%d",sum);
    free(ptr);
}