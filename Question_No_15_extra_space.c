#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    printf("enter the name");
    scanf("%[^\n]",str);
    int n=strlen(str),i=0,j=0;
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            
        }
        else
        {   
            while(str[j]==' ')
            {
                 
                i++;
            }
            
            

        }
        j++;
    }

   
        
    
    printf("%s",str);
    

}