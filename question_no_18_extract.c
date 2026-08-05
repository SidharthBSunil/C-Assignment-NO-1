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

{
    int digit,pos,no_of_bits;
    char* arr=(char*)malloc(32*sizeof(char));

    printf("enter the number\n");
    scanf("%d",&digit);
    int temp=digit;
    base_conversion(digit,arr);

    printf("enter the starting position\n");
    scanf("%d",&pos);

    printf("enter the no of bits to change \n");
    scanf("%d",&no_of_bits);

    digit &=((1<<no_of_bits)-1)<<pos;
    digit =digit>>pos;
    printf("result is ....... %d\n",digit);
    base_conversion(digit,arr);

    free(arr);





}