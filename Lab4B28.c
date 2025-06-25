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
    int duplicate=0;
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            if(a[j]==a[k]){
                duplicate++;
                a[k]=a[k+1];
            }
        }
    }
    for(int i=0;i<=n-duplicate;i++){
        printf("%d,",a[i]);
    }
}