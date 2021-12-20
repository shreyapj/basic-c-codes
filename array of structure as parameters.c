#include<stdio.h>
struct student
{
    char name[20];
    int sem;
};
void read_vol(struct student *st,int n);
void print_vol(struct student *st,int n);
void main()
{
    int n=5;
    struct student std[20];
    read_vol(std,n);
    print_vol(std,n);
}
void read_vol(struct student *st,int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%s %d",st[i].name,&st[i].sem);
}
void print_vol(struct student *st,int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%s %d\n",st[i].name,st[i].sem);
}