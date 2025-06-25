#include<stdio.h>
void main (){
    int a[100];
    int n;
    printf("Enter a size:");
    scanf("%d",&n);
    printf("Enter Elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b;
    printf("enter element to insert:");
    scanf("%d",&b);
    int i=n,flag=0;
    for(int j=0;j<n;j++){
        if(b<a[j]){
            i=j;
            break;
        }
    }
    for(int j=n;j>=0;j--){
        a[j]=a[j-1];
        if(j==i){
            a[j]=b;
            break;
        }
        
    }
    a[i]=b;
    for(int i=0;i<n+1;i++){
        printf("%d,",a[i]);
    }

}
