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
    printf("number in binary version\n");


    for(int i=n;i>=0;i--)

        {
            printf("%c\t",*(arr+i));
        }

    printf("\n");
    
    

}

int main()
{   char* arr=(char*)malloc(32*sizeof(char));
    int first,second,pos,no_of_bits;

    printf("enter the first number \n");
    scanf("%d",&first);
    base_conversion(first,arr);

    printf("enter the second number \n");
    scanf("%d",&second);
    base_conversion(second,arr);

    printf("enter number of position to change\n");
    scanf("%d",&pos);

    printf("enter no of bits to change\n");
    scanf("%d",&no_of_bits);

    int mask=((1<<no_of_bits)-1)<<pos;

    printf("result is %d\n",((first & ~(mask))|(second & (mask))));

    base_conversion(((first & ~(mask))|(second & (mask))),arr);

    free(arr);


    

}