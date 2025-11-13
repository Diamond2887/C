#include <stdio.h>

int let_us_get_its_absolute_value(int n) { return n < 0 ? -n : n; }

int countdigit(int number, int digit)
{
    if (number == 0)
        if (digit == 0)
            return 1;
        else
            return 0;

    int n = let_us_get_its_absolute_value(number);

    int count = 0;
    for (int i = n % 10; n != 0; n /= 10, i = n % 10)
        if (i == digit)
            count++;

    return count;
}

void let_us_test_it()
{
    int number, digit;
    scanf("%d%d", &number, &digit);
    printf("%d\n", countdigit(number, digit));
}

int main()
{
    let_us_test_it();
    let_us_test_it();
    let_us_test_it();
    let_us_test_it();
    return 0;
}
