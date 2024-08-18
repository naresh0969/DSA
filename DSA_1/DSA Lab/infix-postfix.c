#include<stdio.h>
char stack[15];
char arr[15];
char res[15];
int min=-1,top=-1;
char pop();
void push(char b);
int prese(char a);
void main(){
    scanf("%s",arr);
    int k=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='+'||arr[i]=='-'||arr[i]=='*'||arr[i]=='/'){
            while(prese(arr[i])<=prese(stack[top])&&top>min){
                res[k]=pop();
                k++;
            }
            push(arr[i]);
        }
        else{
            res[k]=arr[i];
            k++;
        }
    }
    for(int i=0;top!=-1;i++){
        res[k]=stack[top];
        top--;
        k++;
        
    }
    for(int i=0;res[i]!='\0';i++){
        printf("%c",res[i]);
    }
}
int prese(char c){
    if(c=='*'||c=='/'){
        return 2;
    }
    else{
        return 1;
    }
}
char pop(){
    char ele=stack[top];
    top--;
    return ele;
}
void push(char b){
    top++;
    stack[top]=b;
}

