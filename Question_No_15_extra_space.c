#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the name");
    scanf("%[^\n]",str);
    int n=strlen(str),space=0;
    for(int i=0;i<=n;i++)
    {
        if(str[i]==' ')
        {
            space++;
        }
        if(space==2)
        {

            int j=i+1;
            while(str[j]!=' ')
            {
                j++;
            }
            while(str[j]==' ')
            {
                str[i]=str[j];
                i++;
                j++;
            }
            space=0;
        }
        
    }
    printf("%s",str);
    

}