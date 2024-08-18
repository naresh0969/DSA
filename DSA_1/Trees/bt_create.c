#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
}*root,*temp;
struct node*  create(){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    printf("\nEnter data :");
    int n;
    scanf("%d",&n);
   
    if(n==-1){
        return NULL;
    }
    newnode->data=n;
    printf("enter the left child data %d",n);
    newnode->left=create();

    printf("enter the right child data %d",n);
    newnode->right=create();
    return newnode;
}
void preorder(struct node *temp){
    if(temp==NULL) return;
    printf("%d ",temp->data);
    preorder(temp->left);
    preorder(temp->right);
}
void inorder(struct node* temp){
    
    if(temp==NULL) return;
    inorder(temp->left);
    printf("%d ",temp->data);
    inorder(temp->right);
}
void postorder(struct node *temp){
    if(temp==NULL) return;
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ",temp->data);
    
}
void main(){
    printf("Preorder :\n");
    root=create();
    printf("Preorder :");
    preorder(root);
    printf("\n");
    printf("Inorder :");
    inorder(root);
    printf("postorder :");
    postorder(root);
    
}