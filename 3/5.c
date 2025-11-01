#include <stdio.h>

int main()
{
    int mileage, wait;
    scanf("%d%d", &mileage, &wait);

    int cost = 10; // 起步费啊起步费，固定的10块
    cost += wait / 5 * 2; // 等待时间啊等待时间，一起计算
    if(mileage <= 3)
        ; // 啥也不做啊啥也不做
    else
    {
        int beyond = mileage - 3;
        cost += beyond * 2;

        if(beyond > 10)
            cost += beyond - 10; // 超出部分要加钱啊要加钱
    }

    printf("%d", cost);

    return 0;
}
