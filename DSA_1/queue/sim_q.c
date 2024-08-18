//basic queue operations.

#include<stdio.h>
int stack[20];
int front=-1,rear=-1;
void push(int num);
void pop();
void display();
void main(){
    int val=1;
    int num;
    while(val!=-1){
        printf("1 to Enqueue :\n");
        printf("2 to dequeue :\n");
        printf("3 to display\n");
        scanf("%d",&val);
        switch(val){
            case 1:
                printf("Enter number :");
                scanf("%d",&num);
                push(num);
                break;
            case 2:pop();break;
            case 3:display();break;
            default:break;
        }
    }
}
void push(int num){
    if(rear>20) {
        printf("Stack overflow ! Re-Enter\n");
        front=rear=-1;
    }
    else if(front==-1&&rear==-1){
        front=rear=0;
        stack[rear]=num;
    }
    else{
        rear++;
        stack[rear]=num;
    }
}
void pop(){
    if((rear==-1&&front==-1)||front>=rear){
        printf("Stack underflow!\n");
    }
    else{
        front++;
    }
}
void display(){
   for(front;front<=rear;front++){
    printf("%d ",stack[front]);
   }
    printf("\n");
}