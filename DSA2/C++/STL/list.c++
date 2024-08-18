//list
#include<iostream>
#include<list>
using namespace std;
int main(){

    //creating a list with default value 50
    list <int>l(4,50);
    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
    list <int>n(5);
    n.push_back(5);
    n.push_front(4);
    n.push_back(7);
    n.erase(n.begin());
    cout<<"size of list "<<sizeof(n);

    return 0;
}