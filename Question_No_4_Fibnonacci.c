#include<stdio.h>
int main()
{   int num,a=0,b=1,res=0;
    printf("enter number to find fibnonacci\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        res=a+b;
        printf("%d,\t",res);
        a=b;
        b=res;
    }
}