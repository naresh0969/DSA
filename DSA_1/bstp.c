#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
}*temp,*temp2;
struct node *newnode(int data){
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}
struct node *insert(struct node*root,int data){
    if(root==NULL){
        return newnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
}
void inorder(struct node*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
    else return;
}

struct node* search(struct node*root,int key){
    if(root==NULL || root->data==key){
        return root;
    }
    else if(key<root->data){
        search(root->left,key);
    }
    else{
        search(root->right,key);
    }
}
void find(struct node*root,int key){
    struct node *result=search(root,key);
    if(result==NULL){
        printf("\n%d is not found",key);
    }
    else{
        printf("\n%d is found",key);
    }
}
void delete(struct node* root,int key){
    if(root->data==key){
        temp=root;
        temp->data=temp->left->data;
        temp2=temp->left;
        temp->left=NULL;
        free(temp2);

    }
    else if(key<=root->data){
        delete(root->left,key);
    }
    else{
        delete(root->right,key);
    }
}
void main(){
    struct node *root=NULL;
    root=insert(root,20);
    insert(root,30);
    insert(root,5);
    insert(root,4);
    insert(root,40);
    insert(root,10);
    inorder(root);
    find(root,40);
    find(root,90);
    delete(root,4);
    //delete(root,30);
    //delete(root,10);

    
    printf("\n");
    inorder(root);

    
}

