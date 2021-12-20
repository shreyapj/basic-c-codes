#include<stdio.h>
#include<stdlib.h>
#define size 5
struct student
{
    int sid;
    char sname[10];
    char gender;
};
void push(struct student new_ele,int *top,struct student std_stack[]);
struct student pop(int *top,struct student std_stack[]);
void display(int top,struct student std_stack[]);
int main()
{
    struct student std_stack[10],new_ele,pop_ele;
    int top=-1,ch;
    for(;;)
    {
        printf("1.push\n2.pop\n3.disp\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:

            if(top==(size-1))
            {
                printf("stack full\n");
                break;
            }
            printf("enter the details\n");
            printf("enter id name gender\n");
            scanf("%d",&new_ele.sid);
            scanf("%s",new_ele.sname);
            scanf("%s",&new_ele.gender);
            push(new_ele,&top,std_stack);
            break;
            case 2:

            if(top==-1)
            {
                printf("stack empty\n");
                break;
            }
            pop_ele= pop(&top,std_stack);
            printf("the element popped is\n");
            printf("%d\t",pop_ele.sid);
            printf("%s\t",pop_ele.sname);
            printf("%s\t",pop_ele.gender);
            break;
            case 3:

            if(top==-1)
            {
                printf("stack empty\n");
                break;
            }
            display(top,std_stack);
            break;
            case 4:
            exit(0);
        }
    }
}
void push(struct student new_ele,int *top,struct student std_stack[])
{
    (*top)++;
    std_stack[*top]=new_ele;
}
struct student pop(int *top,struct student std_stack[])
{
    struct student popped_ele;
    popped_ele=std_stack[*top];
    (*top)--;
    return popped_ele;
}
void display(int top,struct student std_stack[])
{
    int i;
    for(i=top;i>=0;i--)
    printf("%d %s %s",std_stack[i].sid,std_stack[i].sname,std_stack[i].gender);
    return;
}