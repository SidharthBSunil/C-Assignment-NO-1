#include<stdio.h>

int main()
{   int num;
    printf("Enter the Number to Find even or odd\n");
    scanf("%d",&num);
    if(num%2==0)
    {
        printf("%d is Even Number\n",num);
    }
    else
    {
        printf("%d is odd number\n",num);
    }

}