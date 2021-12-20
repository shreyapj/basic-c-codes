#include<stdio.h>
struct student
{
   char name[10];
   int age;
   float marks;
   char sub_name[10];
} st1={"shreya",19,100,"dsa"};

void main()
{
    struct student st2,st3;
    printf("enter 2nd students details\n");
    scanf("%s %d %f %s",st2.name,&st2.age,&st2.marks,st2.sub_name);
    printf("the student1 details are\n");
    printf("name=%s\n age=%d\n marks=%f\n sub_name=%s\n",st1.name,st1.age,st1.marks,st1.sub_name);
    printf("the student2 details are\n");
    printf("name=%s\n age=%d\n marks=%f\n sub_name=%s\n",st2.name,st2.age,st2.marks,st2.sub_name);
}