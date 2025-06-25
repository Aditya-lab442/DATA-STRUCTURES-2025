#include<stdio.h>
int main(){
    int n,sum=0;
    printf("enter size:");
    scanf("%d", &n);
    int arr[n];
    printf("enter elements:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum+=arr[i];
    }
    printf("avgerage of elements is: %f\n", (float)sum/n);
}