#include<stdio.h>
#include<ctype.h>
#define max 20
char arr[max];
char stack[max];
int top=-1;

void push(int val){
    stack[++top]=val;
}
int pop(){
    int val=stack[top];
    top--;
    return val;
}

int isoperator(char ope){
    return(ope=='+'||ope=='*'||ope=='-'||ope=='/');
}
void main(){
    printf("Enter Postfix expression :");
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++){
        if(isdigit(arr[i])){
            push(arr[i]-'0');
        }
        else if(isoperator(arr[i])){
            int n1,n2;
            n1=pop();
            n2=pop();
            switch(arr[i]){
                case '+':push(n2+n1);break;
                case '-':push(n2-n1);break;
                case '/':push(n2/n1);break;
                case '*':push(n2*n1);break;
            }

        }
    }
    printf("%d ",stack[top]);
}