// creating and printing in 3 orders of binary tree.
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
}*root,*newnode;
struct node *create(){
    int n;
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    //printf("Enter data OR -1 to next :");
    scanf("%d",&n);
    if(n==-1)return NULL;
    else{
        newnode->data=n;
    }
    printf("Enter left chilld of %d :",n);
    newnode->left=create();
    printf("Enter right child of %d :",n);
    newnode->right=create();
    
    return newnode;
    

    newnode->left=NULL;
    newnode->right=NULL;

}
void preorder(struct node *root){
    
    if(root==NULL)return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(struct node *root){
    
    if(root==NULL)return;
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}
void postorder(struct node *root){
    
    if(root==NULL)return;
    
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}
void main(){
    root=create();
    printf("Preorder :");
    preorder(root);
    printf("\nInorder :");
    inorder(root);
    printf("\nPostorder :");
    postorder(root);

}