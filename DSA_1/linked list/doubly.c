//write a C program to create a double linkd list and perform create,insert,delete,display.

#include<stdio.h>
#include<stdlib.h>
//creating node.
struct node{
    int data;
    struct node* prev,*next;
}*head,*current,*newnode,*temp,*temp2;
int size=0;
void create(){
    int data;
    printf("enter data :");
    scanf("%d",&data);
    newnode=malloc(sizeof(struct node));
    newnode->prev=NULL;
    newnode->next=NULL;
    newnode->data=data;
    size++;
    
    if(head==NULL){
        head=newnode;
        temp=head;
    }
    else{
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }


}
//inserting.
void insert(){
    newnode=malloc(sizeof(struct node));
    newnode->next=NULL;
    newnode->prev=NULL;
    size++;
    int num,pos;
    printf("Enter position :");
    scanf("%d",&pos);
    printf("Enter data :");
    scanf("%d",&newnode->data);
    if(pos<=size && pos>0){
        
        if(pos==1){
            newnode->next=head;
            head->prev=newnode;
            head=newnode;
        }
        
        else if(pos==size){
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;
        }
        else{
            temp=head;
            for(int i=1;i<pos;i++){
                temp2=temp;
                temp=temp->next;
            }
            newnode->next=temp;
            newnode->prev=temp2;
            temp->prev=newnode;
            temp2->next=newnode;

        }
    }
    else{
        printf("Position is out of RANGE!");
    }

}
//delete
void delete(){
    printf("the max range is %d \n",size);
    int pos;
    printf("Enter position to delete :");
    scanf("%d",&pos);
    if(pos<=size && pos>0){
        // deleting at 1st position
        if(pos==1){
            temp=head;
            head=head->next;
            head->prev=NULL;
            free(temp);
        }
        //deletng in between position
        else if(pos==size){
            temp=head;
            for(int i=1;i<pos;i++){
                temp2=temp;
                temp=temp->next;
            }
            temp2->next=NULL;
            free(temp);
        }
        // deleting at end position
        else{
            temp=head;
            for(int i=1;i<pos;i++){
                temp2=temp;
                temp=temp->next;
            }
            temp2->next=temp->next;
            temp->next->prev=temp2;
            free(temp);
        }
        size--;
        
    }
}
//display.
void display(){
    temp=head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp2=temp;
        temp=temp->next;
    }
    printf("Reverse :");
    while(temp2!=NULL){
        printf("%d ",temp2->data);
        temp2=temp2->prev;
    }
    
}
int main(){
    head =NULL;
    int option;
    printf("enter 1 to create :\n");
    printf("2 to display :\n");
    printf("3 to insert: \n");
    printf("4 to delete :\n");
    printf("-1 to QUIT !\n");
    while(1){
        printf("choose option :");
        scanf("%d",&option);
        switch(option){
            case 1:create();break;
            case 2:display();break;
            case 3:insert();break;
            case 4:delete();break;
            case -1: exit(1);
            default : printf("Choose right option \n");
        }
        
    }
}