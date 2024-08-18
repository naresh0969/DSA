#include<bits/stdc++.h>
using namespace std;
void display(int x,int y,int matrix);
int main(){
    int x,y;
    int matrix[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>matrix[x][y];
        }
    }
    display(x,y,matrix[x][y]);
    return 0;
}
void display(int x,int y,int matrix){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<matrix[i][j];
        }
        cout<<'\n';
    }
}