//stack by using linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*top=NULL,*newnode;
void push(){
    int data;
    printf("Enter data :");
    scanf("%d",&data);
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=top;
    top=newnode;
    
    printf("%d is pushed successfully!",data);
}
void pop(){
    if(top==NULL) printf("Stack underflow !");
    else{
        printf("%d is popped !",top->data);
        top=top->next;
    }
    

    
}
void main(){
    top=NULL;
    int choice ;
    printf("Choose one option :\n");
    printf("1 for push element :\n");
    printf("2 for pop :\n");
    printf("3 to know peek :\n");
    printf("-1 to exit :\n");
    scanf("%d",&choice);
    while(1){
        switch(choice){
            case 1:push();break;
            case 2:pop();break;
            case 3:printf("Peek : %d",top->data);break;
            case -1:break;
        }
        scanf("%d",&choice);
    }
    
}