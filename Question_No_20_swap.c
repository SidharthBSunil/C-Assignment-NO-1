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
    if(arr==NULL)
    {
        printf("memory allocation failed\n");
    }
    int first,second,pos,nofbits,a,b;

    printf("enter the first number\n");
    scanf("%d",&first);
    base_conversion(first,arr);

    printf("enter the second number\n");
    scanf("%d",&second);
    base_conversion(second,arr);

    printf("enter the bit position\n");
    scanf("%d",&pos);

    printf("enter the no of bits\n");
    scanf("%d",&nofbits);

    int mask=((1<<nofbits)-1)<<pos;

    a = first&mask;
    first&=~(mask);

    b=second&mask;
    second&=~(mask); 

    first|=b;
    second|=a;

    printf("result is ..........\n");

    printf("first is %d\n",first);
    base_conversion(first,arr);

    printf("second is %d\n",second);
    base_conversion(second,arr);


    free(arr);
}    