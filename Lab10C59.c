#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first1 = NULL;

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
void deleteDuplicate(){
    struct node *save = first1;
    while(save->link!=NULL){
        struct node *save1 = first1;
        while(save1->link!=NULL){
            if(save->info==save1->link->info){
                save1->link=save1->link->link;
                save1->info=save1->link->info;
            }
            save1=save1->link;
        }
        save=save->link;
    }
}
void display(){
    struct node *save = first1;
    // save = first;
    if(first1 == NULL){
        printf("Empty Set.");
        return;
    }

    while(save!=NULL){
        printf("%d,",save->info);
        save = save->link;
    }
    printf("\n");
}
void main(){
    int fir1=1;
    while(fir1!=0){
        insertAtEnd1();
        printf("enter 0 to exit");
        scanf("%d",&fir1);
        if(fir1==0){
            break;
        }
    }
    deleteDuplicate();
    display();
}