#include<stdio.h>

int main()
{
    char str[50];
    printf("Enter the number to convert");
    scanf("%s",str);
    int num=0;
    for(int i=0;str[i]!='\0';i++)
    {
        num=num*10+(str[i]-'0');
    }
    
    printf("number is %d\n",num);
}