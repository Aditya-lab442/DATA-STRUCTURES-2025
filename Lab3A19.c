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
    int smallest = arr[0],temp1=0;
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
            temp1 = i;
        }
    }
    printf("Smallest element is: %d at index %d\n", smallest, temp1);
    int largest = arr[0],temp2=0;
    for(int i = 1; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
            temp2 = i;
        }
    }
    printf("Largest element is: %d at index %d\n", largest, temp2);
    return 0;
}