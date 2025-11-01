#include <stdio.h>

int main()
{
    int count = 0, n, yournumber, mynumber;
    int status = 0;

    scanf("%d%d", &mynumber, &n);
    n = n > 0 ? (n <= 100 ? n : 100) : 1;
    yournumber = yournumber > 0 ? (yournumber <= 100 ? yournumber : 100) : 1;

    do
    {
        if (++count > n)
        {
            status = 2;
            break;
        }

        scanf("%d", &yournumber);
        if (yournumber == mynumber)
            status = 1;
        else if (yournumber > mynumber)
            printf("Too big\n");
        else if (yournumber < 0)
            status = 2;
        else
            printf("Too small\n");

    } while ( status == 0);

    if (status == 1)
        if (count == 1)
            printf("Bingo!\n");
        else if (count <= 3)
            printf("Lucky You!\n");
        else
            printf("Good  Guess!\n");
    else if (status == 2)
        printf("Game Over\n");
    else
        printf("???\n");

    return 0;
}
