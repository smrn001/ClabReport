#include<stdio.h>
int fact(int f)
{
    if (f<=1)
    {
        return 1;
    }
    else
    {
        return f*fact(f-1);
    }
}


int main()
{

int a;
printf("Enter a number :");
scanf("%d",&a);
printf("Factorial of %d is %d",a,fact(a));

return 0 ;
}