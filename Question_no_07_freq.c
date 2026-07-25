#include<stdio.h>
#include<stdlib.h>
int* frequecy(int n)
{
    int* arr=(int*)malloc(n*sizeof(n));
     int* temp_arr=(int*)malloc(10*sizeof(n));
     if(arr==NULL)
     {
        printf("memory allocation failed");
     }
     if(temp_arr==NULL)
     {
        printf("memory allocation failed");
     }
    printf("enter the digits");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp_arr[i]=0;
    }
    int digit=0,count=0;
    for(int i=0;i<n;i++)
    {
        digit=arr[i];
        count=temp_arr[digit];
        count++;
        temp_arr[digit]=count;

    }
    return temp_arr;
}


int main()
{
    int num;
    printf("enter the number of elements");
    scanf("%d",&num);
    int* array=frequecy(num);
    for(int i=0;i<10;i++)
    {  
        printf("%d digit is %d times repeat\n",i,array[i]);
    }
    //printf("\n");

}