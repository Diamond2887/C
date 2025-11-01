#include <stdio.h>
#include <math.h>

// 本来不想用函数的，但是重复代码太多了
double calc_length(double x1, double y1, double x2, double y2)
{
    double  vec_x = x1 - x2,
            vec_y = y1 - y2;
    double dot = vec_x * vec_x + vec_y * vec_y;
    return sqrt(dot);
}

int main()
{
    double  x1, x2, x3,
            y1, y2, y3;
    scanf("%lf%lf%lf%lf%lf%lf",
          &x1, &y1,
          &x2, &y2,
          &x3, &y3);

    double len1 = calc_length(x1, y1, x2, y2),
           len2 = calc_length(x1, y1, x3, y3),
           len3 = calc_length(x2, y2, x3, y3);

    if(len1 + len2 > len3&&
       len1 + len3 > len2&&
       len2 + len3 > len1)
    {
        double circumference = len1 + len2 + len3;
        double s = circumference / 2;
        double area = sqrt(s * (s - len1) * (s - len2) * (s - len3));
        printf("%.2lf, %.2lf", circumference, area);
    }
    else
        printf("Impossible");

    return 0;
}
