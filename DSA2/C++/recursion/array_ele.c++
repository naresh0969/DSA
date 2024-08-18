//3. print the array elements using recursion.
#include<bits/stdc++.h>
using namespace std;
int print(int i,int size,int arr[]){
    if(i==size) return 0;
    cout<<arr[i]<<" ";
    print(i+1,size,arr);

}
int main(){
    int size;
    cout<<"enter size :";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    print(0,size,arr);
    return 0;
}