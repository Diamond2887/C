#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    n = n < 1 ? 1 : n;

    double e = 1;
    for (int i = 1; i <= n; i++)
    {
        double denominator = 1;
        for (int j = 1; j <= i; j++)
            denominator *= j;
        e += 1 / denominator;
    }

    printf("%.4f", e);

    return 0;
}
