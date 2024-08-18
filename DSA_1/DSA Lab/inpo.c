#include<stdio.h>
# define max 20
char stack[max];
char post[max];
int top=-1,min=-1;
int pres(char operator);
void push(char operator);
char pop();
void main(){
    char str[max];
    printf("Enter the expresion :");
    scanf("%s",str);
    int k=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'){
            while((pres(str[i])<=pres(stack[top]))&&top>min){
                post[k]=pop();
                k++;
            }
            push(str[i]);
        }
        else{
            post[k]=str[i];
            k++;
        }
    }
    while(top>-1){
        post[k]=stack[top];
        k++;top--;
    }
    for(int i=0;post[i]!='\0';i++){
        printf("%c",post[i]);
    }
}
int pres(char operator){
    if(operator=='*'||operator=='/')return 2;
    return 1;
}
void push(char operator){
    top++;
    stack[top]=operator;
}
char pop(){
    char operator=stack[top];
    top--;
    return operator;
}