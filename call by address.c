#include<stdio.h>
#include<string.h>
void swap(char *s1 , char *s2);
int main()
{
int i,n;
char str[10];
printf("enter the string\n");
gets(str);
n=strlen(str);
for(i=0;i<n/2;i++)
swap(&str[i],&str[n-i-1]);
puts(str);
return 0;
}
void swap(char *s1, char *s2)
{
   char temp= *s1;
   *s1=*s2;
   *s2=temp;
   return; 
}