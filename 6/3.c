#include <stdio.h>

int even(int n) { return !(n % 2); }

int main()
{
    int sum = 0, n;
    for (scanf("%d", &n); n > 0; scanf("%d", &n))
        if (!even(n))
            sum += n;
    printf("%d", sum);
    return 0;
}
