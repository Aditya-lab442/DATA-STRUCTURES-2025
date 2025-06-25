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
    int duplicate = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                duplicate++;
                printf("Duplicate element found: %d at indices %d and %d\n", arr[i], i, j);
            }
        }
    }
    return 0;
}