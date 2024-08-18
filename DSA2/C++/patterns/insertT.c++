/*
    if a user given 4
        1      1
        12    21
        123  321
        12344321    
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int space=2*(num-1);
    for(int i=1;i<=num;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //space
        for(int i=1;i<=space;i++){
            cout<<" ";
        }

        //numbers

        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
    return 0;
}