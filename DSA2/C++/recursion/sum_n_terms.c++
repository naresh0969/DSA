//1. print the first 50 natural numbers using recursion.
#include<bits/stdc++.h>
using namespace std;
int nsum(int sum){
    int res=0;
    if(sum==1) return 1;
    res=sum+nsum(sum-1);
    return res;
}
int main(){
    int sum;
    cout<<"Enter sum range ";
    cin>>sum;
    cout<<nsum(sum);
    
    return 0;
}