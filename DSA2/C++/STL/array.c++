#include<bits/stdc++.h>
using namespace std;
int main(){
    //declaration of array
    int basic[5]={1,2,1,4,5};
    //Type 2
    array<int,4> a={1,2,3,4};
    //size
    int size=a.size();
    //printing
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }cout<<endl;
    //0 based index
    //accessing data by indeces.
    cout<<"element at 3 pos : "<<a.at(3)<<endl;
    cout<<"Element at 1 pos : "<<a.front()<<endl;
    cout<<"at 2 pos :"<<a.at(1)<<endl;
    cout<<"Element at last pos :"<<a.back()<<endl;
    return 0;
}