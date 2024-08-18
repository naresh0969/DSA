//Queues using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head,*newnode,*temp,*front,*rear;
void enqueue(int num);
void dequeue();
void display();
void main(){
    head=NULL;
    int val=1;
    int data;
    while(val!=-1){
        printf("\n1 for Enqueue :\n");
        printf("2 for Dequeue :\n");
        printf("3 to Display\n");
        printf("-1 for EXIT!:\n");
        scanf("%d",&val);
        switch(val){
            case 1:printf("Enter number :");
            scanf("%d",&data);
            enqueue(data);
            break;
            case 2: dequeue();break;
            case 3: display();break;
            case -1: break;
        }
    }
}
void enqueue(int num){
    newnode=malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->data=num;
    if(head==NULL){
        head=newnode;
        rear=front=head;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
    printf("Successfully Enqueued \n");

}
void dequeue(){
    if(head==NULL){
        printf("Underflow!\n");
        exit;
    }
    temp=front;
    head=front->next;
    front=front->next;
    free(temp);
    printf("Successfully Dequeued \n");
}
void display(){
    rear=head;
    while(rear!=NULL){
        printf("%d ",rear->data);
        rear=rear->next;
    }
}
