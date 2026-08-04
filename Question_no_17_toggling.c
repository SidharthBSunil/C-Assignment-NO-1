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
            printf("%c",*(arr+i));
        }

    printf("\n");
    
    

}

int main()
{
    char* arr=(char*)malloc(32*sizeof(char));
    int digit,position,no_of_bits,result=0;
    //base_conversion(7,arr);
    printf("enter the number ");
    scanf("%d",&digit);
    base_conversion(digit,arr);

    printf("enter the staring bit");
    scanf("%d",&position);

    printf("number of bits\n");
    scanf("%d",&no_of_bits);

    digit ^=((1<<no_of_bits)-1)<<position;
    printf("result is ");
    
    base_conversion(digit,arr);



}