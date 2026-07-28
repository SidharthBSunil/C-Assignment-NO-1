#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter a word to check it is palindrome or not\n");
    scanf("%s",str);
    int j=strlen(str)-1,half_value=(strlen(str)-1)/2,flag=-1;
    
    for(int i=0;i<=half_value;i++)
    {
        if(str[i]==str[j])
        {
            flag++;

        }
        
        j--;
    }
    if(flag==half_value)
    {
        printf("it is palindrome\n");
    }
    else
    {
        printf("it is not palindrome\n");
    }
    
}