#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    int *ptr =(int *)malloc(n*sizeof(int));
    int *ptr1 =(int *)malloc(n*sizeof(int));
    ptr = &a[0];
    for(int i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &a[0];
    for(int i=0;i<n;i++){
        ptr = &a[0];
        for(int j = 0;j<n - i;j++){
            if(*ptr > *(ptr+1)){
                int temp = *ptr;
                *ptr = *(ptr+1);
                *(ptr+1) = temp;
            }
            ptr++;
        }
    }
    ptr = &a[0];
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
    free(ptr);
}