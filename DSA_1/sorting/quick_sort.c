#include<stdio.h>
void quicksort(int arr[],int low,int high){
    int piv=low;
    int i=low;
    int j=high;
    if(i<j){
        while(arr[i]<=arr[piv]&&i<=j){
            i++;
        }
        while(arr[j]>arr[piv]&&i<=j){
            j--;
        }
        if(i<j){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;

        }
        else{
            if(i>j){
                int temp=arr[piv];
                arr[piv]=arr[j];
                arr[j]=temp;
            }
            quicksort(arr,0,j);
            quicksort(arr,i,high);
        }
    }
}
void main(){
    
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quicksort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

    }
    
}