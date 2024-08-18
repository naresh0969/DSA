// singled linked list.
//creation,insertion,deletion,display.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head,*temp,*prev,*newnode;
int count=0;
void create(int val){
    newnode=malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    count++;
    if(head==NULL){
        head=newnode;
        temp=newnode;
    }
    else{
        temp->next=newnode;
        temp=newnode; 
    }
}
void insert(int num,int index){


    //for first position.
    if(index==0){
        newnode=malloc(sizeof(struct node));
        newnode->data=num;
        newnode->next=head;
        head=newnode;
        count++;
    }
    // checking the range.

    else if(index>=count){
        printf("out of range !");
    }

    // for last position.
    else if(index==count-1){
        temp=head;
        for(int i=0;temp->next!=NULL;i++){
            temp=temp->next;
        }
        newnode=malloc(sizeof(struct node));
        newnode->data=num;
        newnode->next=NULL;
        temp->next=newnode;
        count++;

    }
    // in between position.
    else{
        temp=head;
        for(int i=0;i<index;i++){
            prev=temp;
            temp=temp->next;
        }
        newnode=malloc(sizeof(struct node));
        newnode->data=num;
        newnode->next=NULL;
        prev->next=newnode;
        newnode->next=temp;
        count++;
    }
}

void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void delete(int index){
    //checking range
    if(index<0||index>count-1){
        printf("Out of range !");
        exit;
    }
    //for first node
    else if(index==0){
        temp=head;
        head=temp->next;
        free(temp);
    }
    //for last node
    else if(index==count){
        temp=prev=head;
        while(temp->next!=NULL){
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        free(temp);
    }
    //in between position.
    else{
        temp=head;
        for(int i=1;i<index-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
    }
}

void main(){
    head=NULL;
    create(3);
    create(7);
    create(10);
    insert(11,1);
    insert(8,2);
    insert(9,3);
    insert(87,5);
    insert(30,6);
    insert(0,0);
    printf("Before deletion :");
    display();
    delete(0);
    //delete(1);
    delete(2);
    delete(7);
    
    printf("\nafter deletion :");
    display();
    insert(77,6);
    printf("\nafter insert :");
    display();



}