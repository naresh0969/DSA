/*for given 4
        ****
        *  *
        *  *
        ****    
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;

    /* MY SOLUTION :*/

    // for(int i=0;i<num;i++){
    //     if(i==0||i==num-1){
    //         for(int j=0;j<num;j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     ////space
    //     else{
    //         cout<<"*";
    //         for(int j=0;j<num-2;j++){
    //             cout<<" ";
    //         }
    //         cout<<"*";
    //         cout<<endl;
    //     }
    // }
    
    /*Optimal solution*/
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==0||j==0||i==num-1||j==num-1){
                cout<<"*";
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}