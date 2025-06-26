#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
};

struct node *first = NULL;

void insertAtFirst(){
    int x;
    printf("Enter a value to insert:");
    scanf("%d",&x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;

    if(first == NULL){
        newNode->link = NULL;
        first=newNode;
        return;
    }

    newNode->link = first;
    first=newNode;

}
void display(){
    struct node *save = first;
    // save = first;
    if(first == NULL){
        printf("Empty Set.");
        return;
    }

    while(save!=NULL){
        printf("%d,",save->info);
        save = save->link;
    }
    printf("\n");
}
void deleteAtFirst(){
    if(first == NULL){
        printf("empty set.");
        return;
    }
    first=first->link;
}
void displayAfterDelete(){
    struct node *save = first;
    // save = first;
    if(first == NULL){
        printf("Empty Set.");
        return;
    }
    printf("After delete:");
    while(save!=NULL){
        printf("%d,",save->info);
        save = save->link;
    }
}
void insertAtEnd(){
    int x;
    printf("Enter a value to insert:");
    scanf("%d",&x);

    struct node *newNode = (struct node *)malloc(sizeof(struct node));

    newNode->info = x;
    newNode->link = NULL;

    if(first == NULL){
        first = newNode;
        return;
    }
    struct node *save = first;
    while(save->link!=NULL){
        save = save->link;
    }
    save->link = newNode;
}
void displayAfterInsertAtEnd(){
    struct node *save = first;
    // save = first;
    if(first == NULL){
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
    int n=1;

    while(n!=0){
        int choice;
        printf(" enter 1:for Insert at First\n enter 2 for delete at first\n enter 3 for insert at end\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                insertAtFirst();
                display();
                break;
            case 2:
                deleteAtFirst();
                displayAfterDelete();
                break;
            case 3:
                insertAtEnd();
                displayAfterInsertAtEnd();
                break;
        }
        printf("\nEnter 0 to continue.");
        scanf("%d",&n);
        if(n==0){
            break;
        }
    }
}