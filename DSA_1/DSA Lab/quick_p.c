// quick sort
#include<stdio.h>
#define max 100
int arr[max];
void quicksort(int arr[],int low,int high){
    int i=low;
    int j=high;
    int piv=low;
    while(i<j){
        while(arr[i]<=arr[piv]){
        i++;
        }
        while(arr[j]>arr[piv]){
            j--;
        }
        if(i<j){
            int c;
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
        }
        else{
            int c;
            c=arr[piv];
            arr[piv]=arr[j];
            arr[j]=c;
            quicksort(arr,low,j);
            quicksort(arr,i,high);
        }
    }
}
void main(){
    int size;
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}