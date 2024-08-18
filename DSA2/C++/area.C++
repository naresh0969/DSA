//wrte a function to return area of rectangle and circle upto 3 decimal values and call it,
#include<iostream>
#include<vector>
#include<math.h>
#include<iomanip>
using namespace std;
double swi(int ch,vector<int>a){
    
    double area;
    switch(ch){
        case 1: cout<<"Area of circle =";
        area=M_PI*a.front()*a.front();
        return area;
        case 2: cout<<"Area of Rectangle =";
        area=a.front()*a.at(1);
        return area;

    }
}
int main(){
    vector<int>a;
    int ch;
    cin>>ch;
    for(int i=0;i<2;i++){
        int num;
        cin>>num;
        a.push_back(num);
    }
    double area=swi(ch,a);
    cout<<setprecision(3)<<swi(ch,a);
    return 0;
}