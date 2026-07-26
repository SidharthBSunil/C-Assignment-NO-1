#include<stdio.h>

float add(float num1,float num2)
{
    return num1+num2;
}

float sub(float num1,float num2)
{
    return num1-num2;
}

float mult(float num1,float num2)
{
    return num1*num2;
}

float div(float num1,float num2)
{
    if(num2==0)
    {
        printf("Undefined\n");
        return 0;
    }

    return num1/num2;
}


float selector(float a,float b,int c)
{
    switch(c)
    {
        case 1:
        return add(a,b);
        

        case 2:
        return sub(a,b);
        

        case 3:
        return mult(a,b);
        

        case 4:
        return div(a,b);
        


    }
}
int main()
{
    float num1=0,num2=0;
    int exp=0;
    printf("enter two number");
    scanf("%f%f",&num1,&num2);
    printf("enter 1 for +\n enter 2 for - \n enter 3 for *\n enter 4 for / \n");
    scanf("%d",&exp);
    float result=selector(num1,num2,exp);
    printf("final result is %f\n",result);


}