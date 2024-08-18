// write C++ program to find the Nth fibbonocii number by using recursion
#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1)return n;
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    cin>>n;
    int res=fib(n);
    cout<< res;
    return 0;
}