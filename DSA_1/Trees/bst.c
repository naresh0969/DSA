#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;

}*temp,*head;
int first;

struct node* create(){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->left=NULL;
    newnode->right=NULL;
    int val;
    
    scanf("%d",&val);
    if(val==-1) return NULL;
    if(head==NULL){
        head=newnode;
        temp=newnode;
        first=newnode->data;
    }
    else if(val<first){
        temp=head;
        while(temp->left!=NULL){
            temp=temp->left;
        }
        temp->left=newnode;

    }
    else{
        newnode->data=val;
        printf("Enter left child of %d ",val);
        newnode->left=create();
        printf("Enter right child of %d ",val);
        newnode->right=create();
        return newnode;
    }

}
void preorder(struct node *root){
    if(root==NULL)return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void main(){
    head=NULL;
    struct node *root;
    printf("\nEnter data /-1 for NULL\n");
    root=create();
    printf("Preorder :");
    preorder(root);
}