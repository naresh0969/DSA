/*Write a C program to implement Doubly Linked list (Operations - Creation of DLL,Insertion,Deletion,
search for a given element).*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
}*head,*newnode,*temp;
int size=0;
void create();
void display();
void insert();
void delete();
void search();
void main(){
    int choice=1;
    while(choice!=-1){
        printf("\n");
        printf("\n1 To create DLL :\n");
        printf("2 To Insertion DLL :\n");
        printf("3 To Delete DLL :\n");
        printf("4 to Search an element :\n");
        printf("Enter -1 to Exit!!\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: create();
            break;
            case 2: insert();
            break;
            case 3: delete();
            break;
            case -1: exit;
            // break;
            case 4: search();
            break;
            
        }
    }
}
void create(){
    int val=1;
    head=NULL;
    while(val!=-1){
        newnode=(struct node*)malloc(sizeof(struct node));
        size++;
        printf("Enter data :");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("Enter -1 to stop  ");
        scanf("%d",&val);
    }
    display();
}
void display(){
    newnode=head;
    while(newnode!=NULL){
        printf("%d ",newnode->data);
        newnode=newnode->next;
    }
}
void insert(){
    int pos;
    printf("Enter Position to insert :");
    scanf("%d",&pos);
    if(pos<=size){
        if(pos==1){
            temp=head;
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter data :");
            scanf("%d",&newnode->data);
            newnode->next=temp;
            head=newnode;
            size++;
        }
        else if(pos==size){
            temp=head;
            struct node *last;
            last=(struct node*)malloc(sizeof(struct node));
            size++;
            printf("Enter Data :");
            scanf("%d",&last->data);
            last->next=NULL;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=last;

        }
        else{
            temp=head;
            struct node *bet;
            bet=(struct node*)malloc(sizeof(struct node));
            printf("Enter Data :");
            scanf("%d",&bet->data);
            for(int i=1;i<pos-1;i++){
                temp=temp->next;
            }
            bet->next=temp->next;
            temp->next=bet;

        }
        display();
    }
    else{
        printf("Invalid Position !");
    }
}
void delete(){
    int pos;
    printf("Enter deleting Position :");
    scanf("%d",&pos);
    if(pos<=0 || pos>size){
        printf("Invalid Position !!");
    }
    else if(pos==1){
        temp=head;
        head=temp->next;
        free(temp);
        size--;
    }
    else if(pos>1 && pos<=size){
        temp=head;
        struct node *prev;
        for(int i=1;i<pos;i++){
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
    }

    display();
}
void search(){
    int val,no;
    int not=0;
    temp=head;
    printf("Enter a number to search: ");
    scanf("%d",&val);
    while(temp!=NULL){
        if(temp->data==val){
            printf("%d is Present in The List ",val);
            not++;
            exit;
            
        }
        
        temp=temp->next;
    }
    if(not!=1){
        printf("Not present in the list ");
    }
}