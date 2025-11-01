#include <stdio.h>

int sum(int m, int n)
{
    int result = 0;
    for (int i = m; i <= n; i++)
        result += i;
    return result;
}

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%d", sum(m, n));
    return 0;
}
