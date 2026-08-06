#include<stdio.h>
#include<stdlib.h>
int main()
{

    int n,pos,temp,lr;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int* arr= (int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory allocation failed \n");
    }
    printf("enter the array \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter how much position to change \n");
    scanf("%d",&pos);

    printf("enter 1 for left shift \n enter 2 for right shift\n");
    scanf("%d",&lr);
    if(lr==1)
    {
    for(int i=0;i<pos;i++)
    {   
        temp=arr[0];
        for(int j=0;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;

    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    }
    else
    {
        for(int i=0;i<pos;i++)
    {   
        temp=arr[n-1];
        for(int j=n-1;j>0;j--)
        {
            arr[j]=arr[j-1];
        }
        arr[0]=temp;

    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    }
    printf("\n");
    free(arr);

}