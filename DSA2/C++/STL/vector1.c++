#include<iostream>
#include<vector>
using namespace std;
vector<int> sol(vector<int>&arr,int target);
int main(){
    int target;
    
    vector<int>arr(5);
    for(int i=0;i<5;i++){
        cin>>arr[i];
        
    }
    cout<<"Enter Target :";
    cin>>target;

    vector<int>result=sol(arr,target);
    if(result.size()==2){
        cout<<result[0]<<" "<<result[1];
    }
    else{
        cout<<"Not present";
    }

}


vector<int> sol(vector<int>&arr,int target){
    int n=arr.size();
    vector<int> res;//=new vector<int>;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==target){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
        }
    }
    return res;
}
