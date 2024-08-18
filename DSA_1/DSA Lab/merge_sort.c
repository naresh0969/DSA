//Merge sort

#include<stdio.h>
// function for breaking the array.
void mergesort(int arr[],int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++){
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[m+1+j];
    }
    i=0;j=0;
    k=l;
    while((i<n1)&&(j<n2)){
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
    while(l<n1){
        arr[k]=L[l];
        l++;k++;
    }
    while((m+1)<r){
        arr[k]=R[j];
        j++;
        k++;
    }

}
void main(){
    int arr[]={5,2,7,1,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    //printing original array
    printf("Original Array : ");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    mergesort(arr,0,size-1);
    printf("Sorted :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}