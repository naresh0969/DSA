#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
    int dup=x;
    int sum=0;
    if(x<0){
        return x!=dup;
    }
    while(dup!=0){
        sum=(sum*10)+dup%10;
        dup/=10;
    }
    return sum==x;

}
void main(){
    int x;
    scanf("%d",&x);
    printf("%d",isPalindrome(x));
    
}