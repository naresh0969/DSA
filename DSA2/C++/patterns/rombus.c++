/*for given value 5
output: 
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        //stars
        for(int j=0;j<num-i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<2*i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<num-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    int ispace=2*num-2;
    for(int i=0;i<num;i++){
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //space
        for(int j=0;j<ispace;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
        ispace-=2;
    }
    return 0;
}