/*print right angled triangle with user given height.
if height is given 5,
output:
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int h;
    cin >>h;
    int start=1;
    for(int i=0;i<h;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<=i;j++){ 
            cout<<start <<" ";
            start=1-start;
        }
        cout<<endl;
    }
    return 0;
}