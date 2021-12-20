#include<stdio.h>
#define size 25
struct student
{
   char name[10];
   int age;
   float marks;
   char sub_name[10];
};
void main()
{
    struct student std[size];
    int n,i;
    printf("how many students?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
    printf("reading for %d student",i+1);
    scanf("%s %d %f %s",std[i].name,&std[i].age,&std[i].marks,std[i].sub_name);
   }
   for(i=0;i<n;i++)
   {
    printf("printing for %d student",i+1);
    printf(" %s\n %d\n %f\n %s\n",std[i].name,std[i].age,std[i].marks,std[i].sub_name);
 }
}