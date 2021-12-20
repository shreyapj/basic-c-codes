#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,n=10,i,new_size;
    ptr=(int*)calloc(n,sizeof(int));
     if(ptr==NULL)
    {
        printf("no memory\n");
        return;
    }
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",(ptr+i));
    printf("the elements are\n");
    for(i=0;i<n;i++)
    printf("%d\t",*(ptr+i));
}