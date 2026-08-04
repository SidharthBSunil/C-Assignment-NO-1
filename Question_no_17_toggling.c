#include<stdio.h>
#include<stdlib.h>

void base_conversion(int digit,char *arr)
{
    int target =2;
    int rem,i=0,n;
   
    while(digit!=0)
    {   
        rem=digit%target;
        if(rem>9)
        {
            arr[i]=(rem-10)+'A';
        }
        else
        {
            arr[i]=rem+'0';
        }
        
        digit=digit/target;
        i++;
        
    }
    n=i-1;
    for(int i=n;i>=0;i--)
    {
        printf("%c",*(arr+i));
    }

   printf("\n");
    
    

}

int main()
{
    char* arr=(char*)malloc(32*sizeof(char));
    base_conversion(7,arr);


}