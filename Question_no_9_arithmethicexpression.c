#include<stdio.h>

int add(float num1,float num2)
{
    return num1+num2;
}

int sub(float num1,float num2)
{
    return num1-num2;
}

int mult(float num1,float num2)
{
    return num1*num2;
}

int add(float num1,float num2)
{
    return num1/num2;
}


int selector(float a,float b,int c)
{
    switch(c)
    {
        case 1:
        add(a,b);
        break;

        case 2:
        sub(a,b);
        break;

        case 3:
        mult(a,b);
        break;

        case 4:
        div(a,b);
        break;


    }
}
int main()
{
    float num1=0,num2=0;
    int exp=0;
    printf("enter two number");
    scanf("%d%d",num1,num2);
    printf("enter 1 for +\n enter 2 for - \n enter 3 for *\n enter 4 for / \n");
    scanf("%d",&exp);
    int result=selector(num1,num2,exp);


}