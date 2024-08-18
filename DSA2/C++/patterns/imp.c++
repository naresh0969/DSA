/*if a number given by user the output shuould be
output :
        if num=4
            4 4 4 4 4 4 4
            4 3 3 3 3 3 4
            4 3 2 2 2 3 4
            4 3 2 1 2 3 4
            4 3 2 2 2 3 4
            4 3 3 3 3 3 4
            4 4 4 4 4 4 4
 */

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<2*num-1;i++){
        for(int j=0;j<2*num-1;j++){
            int top=i;
            int left=j;
            int right=(2*num-2)-j;
            int below=(2*num-2)-i;
            cout<< num-min(min(top,below),min(left,right))<<" ";
        }
        cout<<endl;
    }
    return 0;
}