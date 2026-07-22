#include<stdio.h>
int main()
{
    int num,count=0;//to store prime number
    printf("enter the number to find prime or not prime\n");
    scanf("%d",&num);
    if(num==1)
    {
        printf("1 is prime number\n");
    }
    else
    {
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                count++;
            }
            
        }
    }
    if(count==0)
    {
        printf("%d is prime number \n",num);
    }
    else
    {
        printf("%d is not prime number\n",num);
    }
}