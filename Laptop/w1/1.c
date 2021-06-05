#include<stdio.h>
int main()
{
    int a[100],i=0;
    printf("enter the list of numbers");
    while(i!=-1)
    {
        scanf("%d",&a[i]);

    }
    printf("\n");
    for(i=0;i<sizeof(a);i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}