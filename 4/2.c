#include <stdio.h>
#include <math.h>

int main()
{
    int denominator,flag,i;
    double eps,item,pi;
    printf("Enter eps:");
    scanf("%lf",&eps);
    i=1;
    flag=1;
    denominator=1;
    item=1.0;
    pi=0;
    while(fabs(item)>=eps)
    {
        pi+=item;
        i++;
        flag=-flag;
        denominator+=3;
        item=flag*1.0/denominator;
    }
    pi+=item;
    pi*=4;
    printf("result=%.6f\n",pi);
    printf("i=%d\n",i);
    return 0;
}
