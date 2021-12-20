#include<stdio.h>
#define size 100
void read_arr(int n,int arr[]);
void print_arr(int n,int arr[]);
int linear_search(int n,int arr[],int key);
int main()
{
    int n,arr[size],key,index;
    printf("enter the size of array\n");
    scanf("%d",&n);
    read_arr(n,arr);
    printf("the elements are \n");
    print_arr(n,arr);
    printf("\n enter the key element to be searched \n ");
    scanf("%d",&key);
    index=linear_search(n,arr,key);
    if(index==-1)
    printf("key not present\n");
    else
    printf("key element is present at %d index \n",index);
    return 0;
}
void read_arr(int n,int arr[])
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
}
void print_arr(int n,int arr[])
{
    int i;
    for( i=0;i<n;i++)
    printf("%d\t",arr[i]);
}
int linear_search(int n,int arr[],int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}