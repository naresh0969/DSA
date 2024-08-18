#include<stdio.h>
#define MAX 100
int arr[MAX];
void hepify(int last){
    for(int i=last;i>=0;i--){
        int left=2*i+1;
        int right=2*i+2;
        if(arr[i]<=arr[left]||arr[i]<=arr[right]){
            if(arr[left]<arr[right]){
                int c;
                c=arr[i];
                arr[i]=arr[right];
                arr[right]=c;
            }
            else{
                int c;
                c=arr[i];
                arr[i]=arr[left];
                arr[left]=c;
            }
        }
    }
}
void main(){
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=size/2-1;i>=0;i--){
        hepify(size/2-1);
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
