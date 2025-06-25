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
    printf("Enter Index for insert");
    int index;
    scanf("%d",&index);
    int b;
    printf("enter element to insert:");
    scanf("%d",&b);
    for(int j=n;j>=0;j--){
        a[j]=a[j-1];
        if(j==index){
            a[j]=b;
            break;
        }
        
    }
    for(int i=0;i<=n;i++){
        printf("%d,",a[i]);
    }

}
