#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("total number of Names: ");
    scanf("%d", &n);
    char names[n][100];
    printf("Enter Names:\n");
    for(int i = 0; i < n; i++){
        scanf("%s", names[i]);
    }
    char arr[n][100];
    for(int i = 0; i < n; i++){
       for(int j=i+1;j<n;j++){
            if(strcmp(names[i],names[j])>0){
                strcpy(arr[i],names[j]);
               
            }
       }
    }

    for(int i = 0; i < n; i++){
        printf("%s,", arr[i]);
    }
}