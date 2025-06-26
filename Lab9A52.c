#include<stdio.h>
#include<stdlib.h>
void main(){
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    int *ptr=(int *)calloc(n,sizeof(int));
    ptr = &a[0];
    for(int i=0;i<n;i++){
        scanf("%d",ptr);
        ptr++;
    }
    ptr = &a[0];
    int max = *ptr;
    for(int i=0;i<n;i++){
        if(*ptr>max){
            max=*ptr;
        }
        ptr++;
    }
    printf("max=%d",max);
}