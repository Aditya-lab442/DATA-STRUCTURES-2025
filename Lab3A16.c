#include<stdio.h>
int main(){
    int n;
    printf("enter size:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("%d,",arr[i]);
    }


}