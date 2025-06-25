#include<stdio.h>
void main(){
    int a[100];
    int n;
    printf("Enter a size:");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Index for delete");
    int index;
    scanf("%d",&index);
    for(int j=0;j<n;j++){
        if(j==index){
            a[j]=a[j+1];
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d,",a[i]);
    }
}