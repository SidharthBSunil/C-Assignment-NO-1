#include<stdio.h>
#include<string.h>

int main()
{
    char str[20],temp[20];
    printf("enter the name to print reverse");
    scanf("%s",str);
    int n=strlen(str)-1,j=0;
    for(int i=n;i>=0;i--)
    {
        temp[j]=str[i];
        j++;
    }
    
    printf("%s\n",temp);

}