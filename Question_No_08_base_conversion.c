#include<stdio.h>
#include<stdlib.h>
int base_conversion(int digit,int target,char *arr)
{
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
        n=i;
    }
   
    
    return n-1;

}
int main()
{
    int num,base;
    char* arr=(char*)malloc(32*sizeof(char));
    printf("enter the number to convert");
    scanf("%d",&num);
    printf("enter the base");
    scanf("%d",&base);
    int limit=base_conversion(num,base,arr);
     for(int i=limit;i>=0;i--)
    {
        printf("%c\t",arr[i]);
    }
    printf("\n");
    free(arr);


}