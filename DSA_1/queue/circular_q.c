//Circular queues.
#include<stdio.h>
#define max 6
int arr[max];
int rear=-1,front=-1;
void enqueue(int num){
    if(front==(rear+1)%max){
        printf("Overflow !!");
    }
    else if(rear==-1&&front==-1){
        rear=front=0;
        arr[rear]=num;
    }
    else{
        rear=(rear+1)%max;
        arr[rear]=num;
    }

}
void dequeue(){
    if(front==-1&&rear==-1){
        printf("Underflow!!");
    }
    else if(front==rear){
        printf("Undergflow!! re-enter data: ");
        rear=front=-1;
    }
    else{
        front=(front+1)%max;
    }
}
void display(){
    int i=0;
    for(i=front;i!=rear;i=(i+1)%max){
        printf("%d ",arr[i]);

    }
    printf("%d",arr[i]);
}
void main(){
    int val=1;
    int num=0;
    while(val!=-1){
        printf("\nEnter : \n1 to Enqueue :\n");
        printf("2 to Dequeue :\n");
        printf("3 to Display :\n");
        printf("-1 to Exit !:\n");
        scanf("%d",&val);
        switch(val){
            case 1:
                printf("Enter data :");
                scanf("%d",&num);
                enqueue(num);break;
            case 2:dequeue();break;
            case 3:display();
            case -1:break;
            default :break;
        }
    }
}
