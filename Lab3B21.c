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
    int find;
    printf("Enter the element for replace: ");
    scanf("%d", &find);
    int found = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == find){
            printf("Element %d found at index %d\n", find, i);
            found = 1;
            break;
        }
    }
    int replace;
    if(found==0){
        printf("Element %d not found in the array\n", find);
    }
    else{
        printf("Enter the value to replace %d: ", find);
        scanf("%d", &replace);
        for(int i = 0; i < n; i++){
            if(arr[i] == find){
                arr[i] = replace;
                printf("Element %d replaced with %d at index %d\n", find, replace, i);
            }
        }
        for(int i = 0; i < n; i++){
            printf("%d,",arr[i]);
        }
    }
    return 0;
    
}