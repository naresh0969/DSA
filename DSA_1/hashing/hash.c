// storing interger data using hashing.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *hash[10];
struct node *newnode(int data){
    struct node* newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    return newnode;
}
void insert(int num){
    int index=num%10;
    if(hash[index]==NULL){
        hash[index]=newnode(num);
        
    }
    else{
        struct node*temp;
        temp=hash[index];
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode(num);
        
    }
}
void display(){
    printf("\n");
    for(int i=0;i<10;i++){
        struct node*temp=hash[i];
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}
void delete(int num){
    int index=num%10;
    struct node *temp=hash[index],*prev;
    int first=0;

    
        while(temp!=NULL && temp->data!=num){
            prev=temp;
            temp=temp->next;
            first=1;
        }
        if(temp->data==num){
            if(first==0){
                hash[index]=temp->next;
            }
            else{
                prev->next=temp->next;
                free(temp);
            }

        }
        else printf("\n%d is not found.",num);
        

    
}
void search(int num){
    int index=num%10;
    struct node *temp=hash[index];
    while(temp!=NULL&&temp->data!=num){
        temp=temp->next;
    }
    if(temp==NULL) printf("\n%d is not found !",num);
    else if(temp->data==num) printf("\n%d is found.",num);

}
void main(){
    for(int i=0;i<10;i++){
        hash[i]=NULL;
    }
    insert(47);
    insert(37);
    insert(40);
    insert(56);
    insert(50);
    display();
    search(40);
    search(100);
    delete(47);
    delete(40);
    delete(37);
    delete(100);
    display();
}