#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int eval_post(char postfix[]);
void push(int tn,int *top,int stack[]);
int pop(int *top,int stack[]);
int compute(int op1,int op2,char symbol);
int main()
{
    char postfix[10];
    printf("enter a postfix expression\n");
    scanf("%s",postfix);
    printf("the result of evel = %d",eval_post(postfix));
    return 0;
}
int eval_post(char postfix[])
{
    int i=0,top=-1,stack[10],token,temp,op1,op2,result;
    char symbol;
    while(postfix[i]!='\0')
    {
        
        symbol=postfix[i];
        if(isdigit(symbol))
        {
            token=symbol-'0';
            push(token,&top,stack);
        }
        else
        {
            op2=pop(&top,stack);
            op1=pop(&top,stack);
            result=compute(op1,op2,symbol);
            push(result,&top,stack);
        }
        i++;
    }
    return(pop(&top,stack));
}
void push(int tn,int *top,int stack[])
{
    stack[++(*top)]=tn;
    return;
}
int pop(int *top,int stack[])
{
    return(stack[(*top)--]);
}
int compute(int op1,int op2,char symbol)
{
    switch(symbol)
    {
        case '+': return(op1+op2);
        case '-': return(op2-op1);
        case '*': return(op1*op2);
        case '/': return(op2/op1);
    }
}