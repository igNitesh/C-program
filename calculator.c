#include <stdio.h>
int sum(int a, int b)
{
    return printf("%d\n", a + b);
}
int sub(int a, int b)
{
    return printf("%d\n", a - b);
}
int multi(int a, int b)
{
    return printf("%d\n", a * b);
}
int devide(float a, float b)
{
    return printf("%.2f\n",a/b);
}
int even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else
    {
        printf("%d is odd\n", n);
    }
}
int prime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is not prime number\n", n);
            break;
        }
        else
        {
            printf("%d is prime number\n", n);
            break;
        }
    }
}
int fact(int n)
{
    if (n != 1)
    {
        return n*fact(n - 1);
    }
    else
        return 1;
}
int main()
{
    int a,b,n;
    float x,y;
    printf("1 for add\n2 for subtract\n3 for multiply\n4 for devide\n5 for to check even or odd\n6 for to check prime or not\n7 for factorial\n");
    scanf("%d",&n);
    if (n == 1)
    {
        printf("Enter the first number and second number\n");
        scanf("%d%d",&a,&b);
        sum(a,b);
    }
    else if (n == 2)
    {
        printf("Enter the first number and second number\n");
        scanf("%d%d", &a, &b);
        sub(a, b);
    }
    else if (n == 3)
    {
        printf("Enter the first number and second number\n");
        scanf("%d%d",&a,&b);
        multi(a,b);
    }
    else if (n == 4)
    {
        printf("Enter the first number and second number\n");
        scanf("%f%f",&x,&y);
        devide(x,y);
    }
    else if (n == 5)
    {
        printf("Enter the number that  you want to  check even or odd\n");
        scanf("%d",&a);
        even_odd(a);
    }
    else if (n ==6)
    {
        printf("Enter the number that you want you  to  check prime or not\n");
        scanf("%d",&a);
        prime(a); 
    }
    else if (n==7)
    {
        printf("Enter the number that you want to calculate factorial\n");
        scanf("%d",&a);
        printf("THe factorial of %d is %d \n",a,fact(a));
    }
    else{
        printf("invalid operation\n");
    }

    return 0;
}
