#include <stdio.h>

int main()
{
    int denominator, i, n;
    double item, sum;
    printf("Enter n:");
    scanf("%d", &n);
    denominator = 1;
    item = 1;
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + item;
        denominator = denominator + 2;
        item = 1.0 / denominator;
    }
    printf("sum=%f\n", sum);
    return 0;
}