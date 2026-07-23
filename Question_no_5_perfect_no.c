#include<stdio.h>
int perfect(int number)
{
    int result=0;
    for(int i=1;i<number;i++)
    {
        if(number%i==0)
        {
            result+=i;
        }
    }
 return result;
}
int main()
{
    int num;
    printf("enter the number to find perfect number\n");
    scanf("%d",&num);
    int temp=num;
    int result=perfect(num);
    if(result==temp)
    {
        printf("it is perfect number\n");
    }
    else
    {
        printf("it is not perfect number\n");
    }

}