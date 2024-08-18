/*ex input:3
output: 3 3 3 3 3 
        3 2 2 2 3
        3 2 1 2 3
        3 2 2 2 3
        3 3 3 3 3 */
#include<stdio.h>
int main(){
    int num;
    int size=2*num-1;
    scanf("%d",&num);
    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
            if(i!=0||i!=size){
                if(i==0||i==size){
                    printf("%d ",num);
                }
            }
            else if(i==1||i==size){
                printf("%d ",num);
            }
            printf("\n");
            


        }
    }
    return 0;
}