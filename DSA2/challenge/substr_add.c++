#include<iostream>
#include<string>
using namespace std;
bool sol(string samp){
    int n=samp.size();
    for(int i=1;i<n/2;i++){
        if(n%i==0){
            string pattern="";
            for(int j=0;j<n/i;j++){
                pattern+=samp.substr(0,i);
            }
            if(pattern==samp){
                return true;
            }
        }
    }
    return false;
}
int main(){
    string samp;
    cin>>samp;
    cout<<sol(samp);
    return 0;
}