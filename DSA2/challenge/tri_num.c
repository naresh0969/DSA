#include<stdio.h>
void main(){
    int num,dup;
    scanf("%d",&num);
    dup=num;
    for(int i=1;dup!=0;i++){
        
        printf("%d ",num+dup);
        dup-=1;
    }
}