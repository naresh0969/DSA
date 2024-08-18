#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[1000];
    scanf("%s",s);
    char num[11];
    // int res[11];
    int k=0;
    // for(char i=0;i<=10;i++){
    //     res[i]=0;
    // }
    for(char i=0;i<11;i++){

        num[k]=i;
        k++;
    }
    k=0;
    for(int i=0;i<sizeof(s);i++){
        for(int j=0;j<11;j++){
            if(s[j]==num[i]){
                res[k]+=1;

            }
        }
        k++;
    }
    // for(int i=0;i<10;i++){
    //     printf("%d ",res[i]);
    // }
    return 0;
}