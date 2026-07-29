#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int arr[26]={0};
    
    printf("enter the name");
    scanf("%[^\n]", str);
    int n=strlen(str)-1,num;
    for(int i=0;i<=n;i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            num=str[i]-'a';
            arr[num]+=1;

            
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            num=str[i]-'A';
            arr[num]+=1;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0)
        {
            printf("it is not pamgram\n");
            return 0;
        }
    }
    printf("it is  pangram\n");

}