// Deque library functions
#include<iostream>
#include<deque>
using namespace std;
int main(){
    //declaring a deque
    deque<int>d;
    d.push_back(9);
    d.push_front(2);
    d.push_back(10);
    d.push_front(1);
    d.push_back(11);
    d.push_back(15);
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Size of deque is :"<<d.size()<<endl;
    cout<<"max size is: "<<d.max_size()<<endl;
    d.pop_back();
    d.pop_front();
    cout<<"after pop_back and pop_front"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"is empty ? "<<d.empty()<<endl;
    d.erase(d.begin(),d.begin()+2);
    
    cout<<"After erase :"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.clear();
    cout<<"Ater clear "<<d.size();



    return 0;
}