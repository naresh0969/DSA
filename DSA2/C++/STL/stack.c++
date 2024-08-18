#include<iostream>
#include<stack>
using namespace std;
int main(){

    //creating a stack
    stack<string>names;
    names.push("naresh");
    names.push("ramu");
    cout<<"Top is "<<names.top()<<endl;
    names.pop();
    cout<<"Top is "<<names.top()<<endl;
    cout<<"size of stack "<<names.size()<<endl;
    cout<<"is empty "<<names.empty()<<endl;

    return 0;
}