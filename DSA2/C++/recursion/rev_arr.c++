/* Reverse the user given array using recursion*/
#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int arr[],int l){
    if(i>=l/2) return;
    swap(arr[i],arr[l-i]);
    reverse(i+1,arr,l);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(0,arr,n-1);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}