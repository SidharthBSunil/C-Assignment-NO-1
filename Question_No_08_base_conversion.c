#include<stdio.h>
#include<stdlib.h>
int base_conversion(int digit,int target)
{
    int rem,i=0,n;
    char* arr=(char*)malloc(32*sizeof(int));
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
    for(int i=n-1;i>=0;i--)
    {
        printf("%c\t",arr[i]);
    }
    printf("\n");
    free(arr);


}
int main()
{
    int num,base;
    printf("enter the number to convert");
    scanf("%d",&num);
    printf("enter the base");
    scanf("%d",&base);
    base_conversion(num,base);

}