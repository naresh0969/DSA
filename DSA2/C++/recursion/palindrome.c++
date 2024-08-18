// check whether given string is palindrome or not.

#include<bits/stdc++.h>
using namespace std;
bool palin(int i,string &word){
    if(word[i]!=word[word.size()-i-1]) return false;
    if(i>=word.size()/2) return true;
    else palin(i+1,word);
}
int main(){
    string word;
    cin>>word;
    cout<<palin(0,word);
}