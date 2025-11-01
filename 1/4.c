#include <stdio.h>

int main()
{
    int height, time, gravity;

    time = 3;
    gravity = 10;
    height = 0.5 * gravity * time * time;

    printf("height=%d", height);

    return 0;
}
