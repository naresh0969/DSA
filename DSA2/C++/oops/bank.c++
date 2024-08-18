// Set and get Bank details of customers using opps.
#include<iostream>
#include<string>
using namespace std;
class account{
    public:
        string name;
        int age;
    private:
        int accNo;
        string ifsc;
    public:
    void setacc(int num){
        accNo=num;
    }
    int getacc(){
        return accNo;
    }
    void setifsc(string code){
        ifsc=code;
    }
    string getifsc(){
        return ifsc;
    }
};
int main(){

    //Static Memory Allocation

    account costumer1;
    costumer1.name="Naresh";
    costumer1.age=19;
    int acc=896;
    cout<<"Name :"<<costumer1.name<<endl;
    cout<<"Age :"<<costumer1.age<<endl;
    costumer1.setacc(acc);
    cout<<"Account Number :"<<costumer1.getacc()<<endl;
    costumer1.setifsc("UBIN12345");
    cout<<"IFSC :"<<costumer1.getifsc()<<endl;

    // Dynamic Memory Allocation

    account *raj=new account;
    raj->name="Raj";
    raj->age=15;
    raj->setacc(2345);
    raj->setifsc("SBIO2315");
    cout<<"Name :"<<raj->name<<endl;
    cout<<"Age :"<<raj->age<<endl;
    cout<<"Account Number :"<<raj->getacc()<<endl;
    cout<<"IFSC :"<<raj->getifsc()<<endl;

    // deleting the created memory
    delete raj;
    return 0;
}
