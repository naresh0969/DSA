/*if number n is given 4
output:
    A
    AB
    ABC
    ABCD
    
    ABCD
    ABC
    AB
    A*/
#include<bits/stdc++.h>
using namespace std;
void print1(int num);
void print2(int num);
int main(){
    int num;
    cin>>num;
    print1(num);
    cout<<endl;
    print2(num);
    return 0;
}
void print1(int num){
    for(int i=0;i<=num;i++){
        for(char j='A';j<'A'+i;j++){
            cout<<j;
        }
        cout<<endl;
        
    }
}
void print2(int num){
    for(int i=0;i<=num;i++){
        for(char j='A';j<'A'+(num-i);j++){
            cout<<j;
        }
        cout<<endl;
    }
}