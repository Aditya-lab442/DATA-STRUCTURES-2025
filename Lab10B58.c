#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first1 = NULL;

struct node *first2 = NULL;

void insertAtEnd1(){
    int x;
    printf("Enter a value to insert:");
    scanf("%d",&x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = NULL;

    if(first1 == NULL){
        first1 = newNode;
        return;
    }
    struct node *save = first1;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}
void insertAtEnd2(){
    int x;
    printf("Enter a value to insert:");
    scanf("%d",&x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = NULL;

    if(first2 == NULL){
        first2 = newNode;
        return;
    }
    struct node *save = first2;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}
void checkSameLL(){
    // int flag=0;
    struct node *save1 = first1;
    struct node *save2 = first2;
    while(save1->link!=NULL && save2->link!=NULL){
        if(save1->info != save2->info){
            printf("NOT SAME LL.... %d,%d",save1->info,save2->info);
            return;
        }
        save1 = save1->link;
        save2 = save2->link;
    }
    if(save1->link==NULL && save2->link==NULL){
        if(save1->info == save2->info){
            printf("SAME LL");
        }
        else{
        printf("NOT SAME LL %d,%d",save1->info,save2->info);
        }
    }
    else{
        printf("NOT SAME LENGTH");
    }
}
void main(){
    int fir1=1,fir2=1;
    while(fir1!=0){
        insertAtEnd1();
        printf("enter 0 to exit");
        scanf("%d",&fir1);
        if(fir1==0){
            break;
        }
    }
    while(fir2!=0){
        insertAtEnd2();
        printf("enter 0 to exit");
        scanf("%d",&fir2);
        if(fir2==0){
            break;
        }
    }
    checkSameLL();
}