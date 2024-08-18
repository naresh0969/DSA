#include<stdio.h>
void main(){
    int num,size;
    scanf("%d",&num);
    size=2*num-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("%d ",num);
        }
        
        printf("\n");
        num-=1;
    }
    
}