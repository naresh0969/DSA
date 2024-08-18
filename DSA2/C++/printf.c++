#include<iostream>
#include<string>
using namespace std;
int main(){
    string fullname,word;
    int y,z;
    char let;
    // input of number.
    // int,double,float,long long,long.
    // int y,z;
//    std:: cin >>y , std::cin >>z;
//     std::cout <<"value of y,z :" <<y <<" "<<z;
    cout<<"enter two numbers :"<<endl;
    cin >> y ,cin >> z;
    cout<<"value of x,z :"<<y <<" " <<z;
    // //character
    // char let;
    cout<<"enter charcater :"<<'\n';
    cin>>let;
    cout<<"entereed charcter :"<<let <<'\n';
    cout<<"Enter full name :";
    getline(cin,fullname);
    cout<<fullname;
    cout<<"enter a word :"<<'\n';
    cin>>word;
    cout<<"Entered word :"<<word<<'\n';

    return 0;
}