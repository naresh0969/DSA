#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int n;
	cin>>n;
	int even=0,odd=0;
	while(n!=0){
		if((n%10)%2==0){
			even+=n%10;
			n=n/10;
		}
		else{
			odd+=n%10;
			n=n/10;
		}
	}
	cout<<even<<" "<<odd;
}
