#include<stdio.h>
#define MAX_SIZE 25
int stack_full(int,int);
int stack_empty(int);
void push(int,int*,int stack[]);
int pop(int*,int stack[]);
void display(int,int stack[]);
int main()
{
    int n,ele,stack[MAX_SIZE],top=-1,ch,ele_pop;
    printf("enter the number of element");
    scanf("%d",&n);
    for(;;)
    {
        printf("enter : 1-push\n2-pop\n3-display\n4-exit");
        scanf("%d",&ch);
        switch (ch)
        {
         case 1:
                if(stack_full(n,top))
                {
                    printf("stack is full\n");
                    break;
                }
                printf("enter the elements to be pushed\n");
                scanf("%d",&ele);
                push(ele,&top,stack);
                break;
         case 2: 
                if(stack_empty(top))
                {
                  printf("stack is empty\n");
                  break;
                }
                ele_pop=pop(&top,stack);
                printf("the element poped is %d\n",ele_pop);
                break;
         case 3:
                printf("the content of stack\n");
                display(top,stack);
                break;
         case 4:
                exit(0);
        }
    }
}
void push(int ele,int *top,int stack[])
{
    (*top)++;
    stack[*top]=ele;
    return;
}
int pop(int *top,int stack[])
{
    int i=stack[*top];
    (*top)--;
    return i;
}
void display(int top,int stack[])
{
    int i;
    for(i=top;i>0;i--)
    printf("%d",stack[i]);
}
int stack_full(int n,int top)
{
    if(top==n-1)
    return 1;
    return 0;
}
int stack_empty(int top)
{
    if(top==-1)
    return 1;
    return 0;
}