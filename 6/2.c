#include <stdio.h>

int sign(int x) { return x > 0 ? 1 : (x == 0 ? 0 : -1); }

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d", sign(x));
    return 0;
}
