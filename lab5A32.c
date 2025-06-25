#include<stdio.h>
void main(){
    int a[3][2],b[2][3],result[3][3],k=0;
    printf("Enter 1st array elements:");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter 2nd array elements:");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            result[i][j] =0;
            for(k=0;k<2;k++){
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
        
    }
    printf("result:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d  ",result[i][j]);
        }
        printf("\n");
    }
}