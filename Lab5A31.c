#include<stdio.h>
void main(){
    int a[2][2],b[2][2],sum[2][2];
    printf("Enter 1st array elements:");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd array elements:");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d   ",sum[i][j]);
        }
        printf("\n");
    }
}