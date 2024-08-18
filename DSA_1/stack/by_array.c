// implemention of stack by using array.
#include<stdio.h>
int top=-1,min=-1,size=0;
void push(int stack[],int num);
void pop(int stack[]);
int main(){
    int stack[10];
    int choice=1;
    while(choice!=-1){
        printf("\n1 to Push element :\n");
        printf("2 to Pop element :\n");
        printf("4 to know peek :\n");
        printf("5 for is empty? :\n");
        printf("6 for current size :\n");
        printf("-1 to exit :\n");
        scanf("%d",&choice);
        switch(choice){
            int num;
            case 1:
                printf("Enter element :");
                scanf("%d",&num);
                push(stack,num);
                break;
            case 2:pop(stack);break;
            case 4:printf(" peek :%d",stack[top]);break;
            case 5:printf("Is empty? ");
                if(top==-1){
                    printf("1");
                }
                printf("0");
                break;
            case 6:
                printf("current size :");
                printf("%d",top+1);
                break;
            case -1:break;
        }
    }
}
void push(int stack[],int num){
    if(top>10)printf("stack overflow !");
    else if(top==-1){
        top=0;
        stack[top]=num;
        printf("Successfully pushed.");
    }
    else{
        printf("Successfully pushed.");
        top++;
        stack[top]=num;
    }
    size++;
}
void pop(int stack[]){
    if(top<=min){
        printf("Stack underflow");
    }
    else{
        printf("Successfully %d is poped.",stack[top]);
        top--;
    }
    size--;
}