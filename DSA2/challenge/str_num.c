//C program to print the repeatations of numbers 0-9 which given along characters.
//ex: a1b32su64i    OUTPUT: 1 1 1 1 0 1 0 0 0.

#include<stdio.h>
void main(){
    char str[100];
    
    int res[20];
    scanf("%s",str);
    int sum=0;
    for(int j=0;j<11;j++){
        res[j]=0;
    }
    for(int i=0;str[i]!='\0';i++){
        if (str[i]=='0'){
            sum++;
            res[0]=sum;
            sum=0;
        }
        else if(str[i]=='1'){
            sum++;
            res[1]+=sum;
            sum=0;
        }
        else if(str[i]=='2'){
            sum++;
            res[2]+=sum;
            sum=0;
        }
        else if(str[i]=='3'){
            sum++;
            res[3]+=sum;
            sum=0;
        }
        else if(str[i]=='4'){
            sum++;
            res[4]+=sum;
            sum=0;
        }
        else if(str[i]=='5'){
            sum++;
            res[5]+=sum;
            sum=0;
        }
        else if(str[i]=='6'){
            sum++;
            res[6]+=sum;
            sum=0;
        }
        else if(str[i]=='7'){
            sum++;
            res[7]+=sum;
            sum=0;
        }
        else if(str[i]=='8'){
            sum++;
            res[8]+=sum;
            sum=0;
        }
        else if(str[i]=='9'){
            sum++;
            res[9]+=sum;
            sum=0;
        }
        else{
            continue;
        }

        
    }
    for(int i=0;i<=9;i++){
        printf("%d ",res[i]);

    }
    
}