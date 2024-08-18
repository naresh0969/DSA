//SET
//sets stores unique elements.
// .count(value): it used to check whether a element is present in set or not.
// .find(value) : it prints the set from the find element which is present in the set.
#include<iostream>
#include<set>
using namespace std;
int main(){
    //creating a set

    set<int>s;
    s.insert(7);
    s.insert(2);
    s.insert(2);
    s.insert(7);
    s.insert(0);
    s.insert(9);
    s.insert(4);

    //printing set elements.
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    // printing size
    cout<<s.size()<<endl;
    set<int>::iterator dup=s.begin();
    dup++;
    s.erase(dup); //it=s.begin()++ also working
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    //count() : says whether a given element is present in tne set or not.
    cout<<"8 is in or not :"<<s.count(8)<<endl;
    set<int>::iterator it=s.find(7);
    for(auto itr=it;itr!=s.end();itr++){
        cout<<*itr<<" "; 
    }

}