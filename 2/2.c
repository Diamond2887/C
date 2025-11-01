#include <stdio.h>

int main()
{
    int x, y, z, w;
    scanf("%d%d%d%d", &x, &y, &z, &w);
    printf("%d %.1f",
           x + y + z + w,
           (x + y + z + w) / 4.0);

    return 0;
}
