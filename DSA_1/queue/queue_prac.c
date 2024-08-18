//QUEUE operations
#include<stdio.h>
#define max 100
int arr[max];
int size=0;
int rear=-1,front=-1;
void enqueue(int value){
    if(rear>max){
        printf("Queue overflow");
    }
    else if(rear==-1&&front==-1){
        rear=front=0;
    }
    arr[rear]=value;
    rear++;
    printf("\n Successfully enqueued \n");
}
void dequeue(){
    if(rear==-1||front==rear){
        printf("Queue Underflow!\n");
    }
    front++;

}
void display(){
    for(int i=front;i<rear;i++){
        printf("%d ",arr[i]);
    }
}
void main(){
    int val=1;
    int value=0;
    while(val!=-1){
        printf("\n1 to Enqueue :\n");
        printf("2 to Dequeue :\n");
        printf("3 to Display :\n");;
        printf("-1 to Exit ! :\n");
        scanf("%d",&val);
        switch(val){
            case 1:
                
                printf("Enter data :");
                scanf("%d",&value);
                enqueue(value);
                break;
            case 2:dequeue();break;
            case 3:display();break;
            case -1:break;
        }
    }
}
