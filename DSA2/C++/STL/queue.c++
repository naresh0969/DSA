//queue
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string>n;
    n.push("naresh");
    n.push("Ramu");
    cout<<n.front()<<endl;
    cout<<"size before pop "<<n.size()<<endl;
    n.pop();
    cout<<"size after pop "<<n.size();

    return 0;
}
