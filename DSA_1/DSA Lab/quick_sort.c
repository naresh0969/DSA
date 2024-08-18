#include<stdio.h>
int arr[50];
int quicksort(int arr[],int start,int end){
    int i=start;
    int j=end-1;
    int piv=start;
    while(i<j){
        while(arr[i]<=arr[piv]){
            i++;
        } 
        while(arr[j]>arr[piv]){
            j--;
        }
        if(i<j){
            //swaping
            int c;
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=arr[i];
        }
        else{
            int c;
            c=arr[piv];
            arr[piv]=arr[j];
            arr[j]=c;
            quicksort(arr,start,j);
            quicksort(arr,i,end);

        }
        
    }
    
}
void main(){
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }


    quicksort(arr,0,size);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}