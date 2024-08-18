#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*temp,*current;
void create();
void display();
void main(){
    head=NULL;
    int size;
    printf("Enter No. to Create :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        create();
    }
    display();
}
void create(){
    current=malloc(sizeof(struct node));
    printf("Enter data :");
    scanf("%d",&current->data);
    current->next=head;
    if(head==NULL){
        head=current;
        temp=head;
    }
    else{
        temp->next=current;
        temp=current;
    }
}
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}