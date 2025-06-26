#include<stdio.h>
#include<stdlib.h>
void main(){
    int k;
    printf("Enter size of array:");
    scanf("%d",&k);
    int a[k];
    int *ptr =(int *)malloc(k*sizeof(int));
    ptr = &a[0];
    for(int i=0;i<k;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &a[0];
    for(int i=0;i<k;i++){
        printf("%d\n",*ptr);
        ptr++;
    }
    free(ptr);
}