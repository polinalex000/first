#include <stdio.h>
#include <math.h>

double Abs(double x)
{
    if (x >= 0)
        return x;
    else
        return -x;
}

double Factorial(int n)
{
    double x = 1;

    for (int i = 2; i <= n; i++)
    {
        x *= i;
    }

    return x;
}

int main()
{
    double x, eps;

    printf("Input x: ");
    scanf("%lf", &x);

    printf("Input eps: ");
    scanf("%lf", &eps);

    double y = 0;

    int i = 1;

    double dy = pow(x, i) / Factorial(i);

    while (Abs(dy) >= eps)
    {
        y += dy;
        i += 2;

        dy = pow(x, i) / Factorial(i);

    }
    
    printf("Answer: %lf\n", y);
}