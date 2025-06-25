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
    int b;
    printf("enter element to delete:");
    scanf("%d",&b);
    for(int j=0;j<n;j++){
        if(a[j]==b){
            a[j]=a[j+1];
        }
    }
    for(int i=0;i<n-1;i++){
        printf("%d,",a[i]);
    }
}