/*if a number given by user the output shuould be
output :
        if num=4
            4 4 4 4 4 4 4
            4 3 3 3 3 3 4
            4 3 2 2 2 3 4
            4 3 2 1 2 3 4
            4 3 2 2 2 3 4
            4 3 3 3 3 3 4
            4 4 4 4 4 4 4
 */

#include<stdio.h>
int min(int a, int b){
    if(a>=b) return b;
    return a;
}
int main(){
    int n;
    int least;
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int below=(2*n-2)-i;
            int right=(2*n-2)-j;
            least=min(min(top,below),min(right,left));
            printf("%d ",n-least);
        }
        printf("\n");
    }
    return 0;
}