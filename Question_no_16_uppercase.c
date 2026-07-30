#include<stdio.h>
#include<string.h>
int main()
{

    char str[50];
    int i=0;
    printf("enter name to change to uppercase\n");
    scanf("%[^\n]",str);
    while(str[i]!='\0')
    {
        if(str[i]>=97&& str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("%s\n",str);

}