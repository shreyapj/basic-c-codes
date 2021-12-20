#include<stdio.h>
struct student
{
    char name[10];
    int sem;
};
void print_sem(int s);
void print_both(struct student s1);
void main()
{
    struct student st={"abc",13};
    print_sem(st.sem);
    print_both(st);
}
void print_sem(int s)
{
    printf("%d",s);
}
void print_both(struct student s1)
{
    printf("the details are \n");
    printf("%s %d",s1.name,s1.sem);
}