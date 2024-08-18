//Preority queue : This type queue can print the given data in acending order and can in decending order.
#include<iostream>
#include<queue>
using namespace std;
int main(){
    //max heap
    priority_queue<int>max;
    max.push(3);
    max.push(7);
    max.push(4);
    int n=max.size();
    for(int i=0;i<n;i++){
        cout<<max.top()<<" ";
        max.pop();
    }cout<<endl;
    //min heap
    priority_queue<int,vector<int>,greater<int>>min;
    min.push(5);
    min.push(1);
    min.push(3);
    min.push(6);
    min.push(8);
    n=min.size();
    for(int i=0;i<n;i++){
        cout<<min.top()<<" ";
        min.pop();
    }cout<<endl;
    cout<<"Is empty ? "<<min.empty();
    return 0;
}