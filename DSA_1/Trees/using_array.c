// preorder ,inorder,post order. using arrays
#include<stdio.h>
int size=0;
int arr[]={5,7,3,4,9,1};
void create(int arr[]){
    printf("Enter data :");
    
    scanf("%d",&arr[size]);
    printf("Updated data :\n");
    size++;
    print(arr);
    
}
void pop(int arr[]){
    size--;
    printf("Deleted successfully :");
    print(arr);
}
void pre(int arr[],int size,int index){
    if(index>=size) return;
    printf("%d ",arr[index]);
    pre(arr,size,2*index+1);
    pre(arr,size,2*index+2);
}
void in(int arr[],int size,int index){
    if(index>=size)return;
    in(arr,size,2*index+1);
    printf("%d ",arr[index]);
    in(arr,size,2*index+2);

}
void post(int arr[],int size,int index){
    if(index>=size)return;
    post(arr,size,2*index+1);
    post(arr,size,2*index+2);
    printf("%d ",arr[index]);
}
void print(int arr[]){
    printf("Preorder :");
    pre(arr,size,0);
    printf("\n");
    printf("Inorder :");
    in(arr,size,0);
    printf("\n");
    printf("Postorder :");
    post(arr,size,0);
}
void main(){
    
    
    size=sizeof(arr)/sizeof(arr[0]);
    print(arr);
    
    int key=1;
    while(key!=-1){
        printf("\n1 to Add data :\n");
        printf("2 to pop data :\n");
        printf("-1 to exit !");
        scanf("%d",&key);
        switch(key){
            case 1: create(arr);break;
            case 2:pop(arr);break;
            case -1:break;
        }
    }
}