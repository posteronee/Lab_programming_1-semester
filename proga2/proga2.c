#include <stdio.h>
#include <math.h>
int main() {
    double a, b, radian, grade;
    radian = M_PI/180;
    scanf ("%lf", &grade );
    a = (sin(M_PI/2 + 3*grade*radian))/(1 - sin(3*grade*radian-M_PI));
    b = 1/tan(5/4*M_PI + 3/2*grade*radian);
    printf ("%lf", a);
    printf ("%lf", b); // %f - спецификатор дробного числа, %lf - double
    return 0;

}

