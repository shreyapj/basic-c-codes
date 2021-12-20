#include<stdio.h>
typedef enum{lparen,rparen,plus,minus,mul,div,mod,power,eos,operand} precedence;
void print_token(precedence token);
precedence get_token(char *symbol,int *n,char infix[]);
void push(precedence token,int *top,int stack[]);
precedence pop(int *top,int stack[]);
void infix_to_postfix(char infix[]);
#define size 25
int main()
{
    char infix[size];
    printf("enter an infix expression\n");
    scanf("%s",infix);
    printf("the postfix equivalent is\n");
    infix_to_postfix(infix);
}
void infix_to_postfix(char infix[])
{
    int isp[]={0,4,1,1,2,2,2,3,0};
    int icp[]={20,4,1,1,2,2,2,3,0};
    int top=0,stack[size],n=0;
    stack[top]=eos;
    char symbol;
    precedence token;
    for(token=get_token(&symbol,&n,infix);token!=eos;token=get_token(&symbol,&n,infix))
    {
        if(token==operand)
        printf("%c",symbol);
        else if(token==rparen)
        {
            while(stack[top]!=lparen)
            print_token(pop(&top,stack));
            pop(&top,stack);
        }
        else
        {
            while(isp[stack[top]]>=icp[token])
            {
                print_token(pop(&top,stack));
            }
            push(token,&top,stack);
        }
    }
    while((token=pop(&top,stack))!=eos)
    print_token(token);
}
void print_token(precedence token)
{
    switch(token)
    {
        case plus: printf("+");
                   break;
        case minus: printf("-");
                    break;
        case mul  : printf("*");   
                    break;
        case div : printf("/");
                   break;
        case mod:  printf("%");
                   break;
        case power:printf("^");
                   break;    
    }
}
precedence get_token(char *symbol,int *n,char infix[])
{
    (*symbol)=infix[(*n)++];
    switch(*symbol)
    {
        case '(': return lparen;
        case ')': return rparen;
        case '+': return plus;
        case '-': return minus;
        case '*': return mul;
        case '^': return power;
        case '/': return div;
        case '%': return mod;
        case '\0': return eos;
        default : return operand;
    }
}
void push(precedence token,int *top,int stack[])
{
    stack[++(*top)] = token;
    return;
}
precedence pop(int *top,int stack[])
{
    precedence i;
    i=stack[(*top)--];
    return i;
}