/* by using backtracking
    a) print the  1 to N numbers.
    b) print N to 1 linearly.
 */
#include<bits/stdc++.h>
using namespace std;
// function to print 1 to N numbers.
void print1(int i){
    if(i<1){
        return;
    }
    print1(i-1);
    cout<<i;
}

// function to print N to 1 numbers.
void print2(int i,int N){
    if(N<i) return;
    print2(i+1,N);
    cout<<i;
}
int main(){
    int N;
    cin>>N;
    print1(N);
    cout<<endl;
    print2(1,N);
    return 0;
}