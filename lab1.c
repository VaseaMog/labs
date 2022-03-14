#include <math.h>
#include <stdio.h>
int main()
{
    float a, b, c;
    printf("Enter a -> ");
    scanf("%f", &a);
    printf("Enter b -> ");
    scanf("%f", &b);
    printf("Enter c -> ");
    scanf("%f", &c);

    if (!a && !b && !c) // Если операнд равен нулю, то возвращает 1. if заработает если все переменные равны нулю.
        return 0;

    float x = 1.0f;
    if (b > 0.0f)
        printf("f(x) = %f * x^2 + %f * x", a, b);
        else printf("f(x) = %f * x^2 - %f * x", a, fabs(b));
    if (c > 0.0f)
        printf(" + %f\n", fabs(c));
        else printf(" - %f\n",  fabs(c));

    float f_x = a * x * x + b * x + c;
    float f_minus_x = a * -x * -x + b * -x + c;
    if (f_x == f_minus_x)
        printf("Function is even: f(x) = %f = f(-x) = %f\n", f_x, f_minus_x);
    else if (f_minus_x == -f_x)
        printf("Function is odd: f(-x) = %f = -f(x) = %f\n", f_minus_x, -f_x);
    else
        printf ("Function is neither even nor odd: f(x) = %f != f(-x) = %f != -f(x) = %f\n" , f_x , f_minus_x , -f_x);

        float vx = -b / (2.0f * a);
        float vy = a * vx * vx + b * vx + c;
        printf("Vertex (%f, %f) is a ", vx, vy);
        if (a > 0.0f)
            printf("minimum");
        else
            printf("maximum");
        printf("\n");
}
