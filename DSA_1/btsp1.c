
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right;
};
//creating newnode
struct node *newnode(int data){
    struct node*newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

// inserting 
struct node* insert(struct node* root,int data){
    if(root==NULL){
        return newnode(data);
    }
    else if(data<root->data){
        root->left=insert(root->left,data);
    }
    else{
        root->right=insert(root->right,data);
    }
}

//inorder display
void inorder(struct node*root){
    if(root==NULL) return;
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

//finding address of the minimum value.
struct node *min(struct node* temp){
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

//deletion

struct node* delete(struct node* root,int key){
    if(root==NULL)return root;
    else if(key<root->data){
        root->left=delete(root->left,key);
    }
    else if(key>root->data){
        root->right=delete(root->right,key);
    }
    else if(root->data==key){
        // case 1 : no child
        if(root->left==NULL && root->right==NULL){
            free(root);
            root=NULL;
        }
        // case 2 : 1 child
        else if(root->left==NULL){
            struct node*temp=root;
            root=root->right;
            free(temp);
        }
        else if(root->right==NULL){
            struct node *temp;
            temp=root;
            root=root->left;
        }
        // case 3
        else{
            struct node *temp=min(root->right);
            root->data=temp->data;
            root->right=delete(root->right,temp->data); 
        }

        return root;
    }
    else{
        printf("%d is found ",key);
    }
    
}
struct node* find(struct node*root,int key){
    if(root==NULL||root->data==key)return root;
    else if(key<root->data) find(root->left,key);
    else find(root->right,key);
}
//search

void search(struct node*root,int key){
    struct node* result=find(root,key);
    if(result==NULL){
        printf("%d is not found\n",key);
    }
    else printf("%d is found \n",key);
}
void main(){
    struct node *root;
    root=NULL;
    root=insert(root,20);
    insert(root,10);
    insert(root,30);
    insert(root,25);
    insert(root,40);
    insert(root,15);
    insert(root,9);
    insert(root,35);
    insert(root,50);
    inorder(root);
    delete(root,30);
    delete(root,100);
    // delete(root,10);
    // delete(root,9);
    printf("\n");
    inorder(root);
    printf("\n");
    search(root,10);
    search(root,20);
    search(root,50);
    search(root,90);
    search(root,40);
    search(root,80);
}