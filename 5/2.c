#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int min;
    scanf("%d", &min);

    for (int i = 1; i < n; i++)
    {
        int input;
        scanf("%d", &input);
        if (input < min)
            min = input;
    }

    printf("%d", min);

    return 0;
}
