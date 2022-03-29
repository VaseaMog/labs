#include <stdio.h>
#include <math.h>

int main() {
    double x, h, f;
    printf("Vvedite x\n");
    scanf("%lf", &x);
    while (x < 0 || x > 3) {
        printf("nevernoe znachenie X, vvedite 0 <= x <= 3\n");
        scanf("%lf", &x);
    }
    printf("Vvedite h\n");
    scanf("%lf", &h);

    printf("x          f(x)\n");
    printf("_______________\n");
    while (0 <= x && x <= 1.5) {
        f = pow(2.0, x) - 2.0 + x * x;
        printf("%.1lf          %.1lf\n", x, f);
        x = x + h;
        if (x > 1.5)
            return 0;
    }
    while (1.5 < x && x <= 3.0) {
        f = sqrt(x) * pow(M_E, -x*x);
        printf("%.1lf          %.1lf\n", x, f);
        x = x + h;
    }
}
