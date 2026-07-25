#include<stdio.h>
int gcd(int a ,int b)
{   
    int rem;
    rem=a%b;
    if(rem==0)
    {
        return b;
    }
    return(gcd(b,rem));
}
void main()
{
    int num1,num2;
    printf("enter the two number to find gcd\n");
    scanf("%d%d",&num1,&num2);
    printf("gcd of number is %d\n",gcd(num1,num2));

}