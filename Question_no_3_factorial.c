#include<stdio.h>
int main()
{
    int num,res=1;
    printf("enter number to find factorial\n");
    scanf("%d",&num);
    if(num==0)
    {
        printf("%d factorial is 0\n",num);
    }
    else
    {
        for(int i=num;i>=1;i--)
        {
            res*=i;
        }
        printf("%d factorial is %d\n",num,res);
    }

}