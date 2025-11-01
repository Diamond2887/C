#include <stdio.h>

int main()
{
    int sum = 0;
    int num;
    for (scanf("%d", &num); num > 0; scanf("%d", &num))
        if (num % 2 != 0)
            sum += num;
    printf("%d", sum);

    return 0;
}
