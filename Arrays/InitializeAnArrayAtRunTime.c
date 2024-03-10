#include<stdio.h>
int main()
{
    int a[50],size,i;
    printf("enter size of Array :");
    scanf("%d",&size);
    printf("Enter elements in the Array  :");
    for(i=0; i<size ;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("elements of Array are :");
    for(i=0; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}