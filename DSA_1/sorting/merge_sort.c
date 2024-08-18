#include<stdio.h>
int arr[20];
void sort(int arr[],int low,int mid,int high){
    int n1=(mid-low)+1;
    int n2=high-mid;
    int L[n1],R[n2];
    for(int i=0;i<n1;i++){
        L[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++){
        R[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=low;
    while(i<n1 && i<n2){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;

        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;k++;
    }
}
void mergesort(int arr[],int low,int high){
    if(low<high){
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        sort(arr,low,mid,high);
    }
}
void main(){
    int size;
    printf("Enter size :");
    
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}