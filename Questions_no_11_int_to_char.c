#include<stdio.h>
int main()
{
    char str[50];
    int num,n=1,digit,i=0;
    printf("enter the number to change string");
    scanf("%d",&num);
    int temp=num;
    while(num!=0)
    {
        num/=10;
        n*=10;
    } 
    n/=10;
    while(temp!=0)
    {
        digit=temp/n;
        str[i]=digit+'0';
        temp%=n;
        n/=10;
        i++;

    }
    printf("the intergers %s",str);
}