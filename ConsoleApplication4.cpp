#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES
#include <math.h>

int main()
{
    double x, y, z;

    printf("X: ");
    scanf_s("%lf", &x);
    printf("Y: ");
    scanf_s("%lf", &y);
    printf("Z: ");
    scanf_s("%lf", &z);

    double degreeToRad = M_PI / 180.0;
    double a = (1 + y) * (x + y / (x * x + 4)) / (exp(-x - 2) + 1 / (x * x + 4));
    double b = (1 + cos((y - 2) * degreeToRad)) / (pow(x, 4) / 2 + pow(sin(z * degreeToRad), 2)) - cos(13 * degreeToRad);

    printf("a = %lf\n", a);
    printf("b = %lf\n", b);

    system("pause");
    return 0;
}
