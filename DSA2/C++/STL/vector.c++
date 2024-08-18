// All vector functions
#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int main(){
    //declaration of vector
    vector<int>v; //v is vector name.initially its capacity is zero.

    // another method to declare
    vector<int>n(5,1); //here 5 is size and 1 is all its defaul values.
    
    //coping a vector to another vector.
    vector<int> copied(n); //n vector is copied to copy vector.

    //printing vectors
    for(int i:n){
        cout<<i<<" ";
    }cout<<endl;

    /*dynamical memory allocation takes place in vectors. when its size
    is exceded it creats a new vector with double size of previos vector.*/

    cout<<"capacity :"<<v.capacity()<<endl; //this gives capacity of the vecotor ,not its size.

    v.push_back(9);
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;
    v.push_back(8);
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;
    v.push_back(7);
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;
    v.push_back(6);
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;
    v.push_back(5);
    cout<<"capacity :"<<v.capacity()<<endl;
    cout<<"size :"<<v.size()<<endl;

    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    // to access 1st vector value
    cout<<"front :"<<v.front()<<endl;
    cout<<"at 2 pos:"<<v.at(1)<<endl;
    cout<<"at 1 pos:"<<v.at(0)<<endl;
    
    //for last position
    cout<<"last pos :"<<v.back()<<endl;

    //pop function
    v.pop_back();
    
    cout<<"after pop :"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    // checking vector is empty or not
    cout<<" See Empty or not: "<<v.empty()<<endl;
    // to clear all vector data
    // variable_name.clear();
    v.clear();
    cout<<"After clear :"<<v.size()<<endl;
    cout<<" See Empty or not: "<<v.empty()<<endl;



    return 0;
}