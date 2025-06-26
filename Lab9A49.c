#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a = (int *)malloc(sizeof(int));
    char *achar = (char *)malloc(sizeof(char));
    float *f = (float *)malloc(sizeof(float));
    if(*a&&*achar&&*f){
        *a=1;
        *achar='A';
        *f=1.5;
        printf("Integer:%d\n",*a);
        printf("character:%c\n",*achar);
        printf("float:%f\n",*f);
        free(a);
        free(achar);
        free(f);
    }
    else{
        printf("memory allocation Fail.");
    }
}