//double circular list
/*1.create,2.display,3.Add */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* pre,*next;
}*head,*current,*temp,*first,*last;
void create();
void display();
void insert();
int size=0;
//void edit();
int main(){
    head=NULL;
    int val=1;
    while(val!=-1){
        printf("1 to Create :\n");
        printf("2 to Display :\n");
        printf("3 to Insert : :\n");
        printf("-1 to EXIT! :\n");
        scanf("%d",&val);
        switch(val){
            case 1: create();break;
            case 2: display();break;
            case 3: insert();break;
            case-1: break;
            default:printf("Invalid Number :");break;
        }
    }
    return 0;
}
void create(){
    current=malloc(sizeof(struct node));
    size++;
    printf("Enter Data :");
    scanf("%d",&current->data);
    current->next=NULL;
    current->pre=NULL;
    
    if(head==NULL){
        head=current;
        temp=head;
    }
    else{
        temp->next=current;
        current->pre=temp;
        temp=current;
        last=temp;
    }
}

void display(){
    temp=head;
    printf("Forward direction  :");
    while(temp!=NULL){
        printf("%d ",temp->data);
        last=temp;
        temp=temp->next;
    }
    printf("\nBackward Direction :");
    while(last!=NULL){
        printf("%d ",last->data);
        last=last->pre;
    }
    printf("\n");

}
void insert(){
    int pos;
    printf("Enter position to insert :");
    scanf("%d",&pos);
    if(pos<=size && pos>0){
        current=malloc(sizeof(struct node));
        current->pre=NULL;
        current->next=NULL;
        size++;
        printf("Enter data :");
        scanf("%d",&current->data);
        if(pos==1){
            
            temp=head;
            current->next=temp;
            temp->pre=current;
            head=current;
        }
        else if(pos==size){
            temp=last;
            temp->next=current;
           
        }
    }
    else printf("Position is not in Range!");
}