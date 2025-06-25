#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main(){
    int n,flag=0;
    printf("enter number of words:");
    scanf("%d",&n);
    char words[n][100];
    for(int i=0;i<n;i++){
        scanf("%s",words[i]);
    }
    srand(time(0));
    int index,k=-1;
    while(k==-1){
        index=rand()%n;
        printf("word at %d is =%s",index,words[index]);
        char word1[1][100];
        scanf("%s",word1[1]);
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++){
                if(words[index][j]==word1[1][k]){
                    flag=1;
                }
                else{
                    flag=0;
                }
            }
        }

        if(flag==1){
            printf("Anagram\n");
            printf("Enter any number to exit or enter -1 to continue:");
            scanf("%d",&k);
            if(k==-1){
                continue;
            }
            else{
                break;
            }
        }
        else{
            printf("Not Anagram\n");
            printf("Enter any number to exit:");
            scanf("%d",&k);
            if(k==-1){
                continue;
            }
            else{
                break;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     printf("%s\n",words[i]);
    // }
}