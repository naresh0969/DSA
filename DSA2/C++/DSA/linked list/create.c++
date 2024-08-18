//creation of singly linked list.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*next;
}*head,*temp,*current;
void create(){
    current=new node;
    current->next=NULL;
    cout<<"Enter Data :";
    cin>>current->data;
    if(head==NULL){
        head=current;
        temp=current;

    }
    else{
        temp->next=current;
    }

}
void print(){
    temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
    head=NULL;
    int size;
    cout<<"Enter size :";
    cin>>size;
    for(int i=0;i<size;i++){
        create();
    }
    print();
    return 0;
}