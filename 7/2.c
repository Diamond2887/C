#include <stdio.h>
#include <math.h>

int prime(int m)
{
    if (m <= 1 || m > 500)
        return 0;

    for (int i = 2; i <= sqrt(m) + 1; i++)
        if (m % i == 0)
            return 0;

    return 1;
}

int hachimi(int m, int n)
{
    int sum = 0;
    for (int i = m; i <= n; i++)
        if (prime(i))
            sum += i;

    return sum;
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", hachimi(m, n));
    return 0;
}