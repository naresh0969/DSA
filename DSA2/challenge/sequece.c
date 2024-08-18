#include<stdio.h>
void main(){
    int a=0,b=0,c,d,num,val=-3;
    int arr[10];
    scanf("%d",&num);
    for(int k=0;k<num;k++){
        scanf("%d",&arr[k]);
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<arr[i]+9;j++){
            if(j%2==0){
                printf("%d ",val);
                c=2*a+1;
                val+=c;
                a++;
            }
            else{
                printf("%d ",val);
                d=2*b;
                val+=d;
                b++;
            }
        }
        printf("\n");
        a=0,b=0,c,d,num,val=-3;
    }
    
}