#include <stdio.h>

int main()
{
    double speed, limit;
    scanf("%lf%lf", &speed, &limit);

    if(speed >= limit * 1.5)
        printf("revoke the driving licence");
    else if(speed >= limit * 1.1)
        printf("impose a fine of 200 yuan");
    else
        printf("do nothing");

    return 0;
}
