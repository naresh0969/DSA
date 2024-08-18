// MAP :maps consist of keys and values every key will have a value.
#include<iostream>
#include<map>
using namespace std;
int main(){
    //creating map :
    map<int ,string>m;
    // making string values to int type keys.

    m[1]="india";
    m[2]="naresh";
    m[5]="ramu";
    m[7]="shiva";
    //inserting a new key and value;
    m.insert({10,"hello"});
    //printing
    cout<<"Before erease "<<endl;
    for(auto i:m){
        //.first gives key , .second gives its value.
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    //erease
    m.erase(10);
    cout<<"After erease "<<endl;
    for(auto i:m){
        
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;

    //count()
    cout<<"5 is there ?"<<m.count(5)<<endl;
    //finding
    auto i=m.find(2);
    for(auto j=i;j!=m.end();j++){
        cout<<(*j).first<<" "<<(*j).second<<endl;
    }


    return 0;
}