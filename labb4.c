int main() 
{
    double e;
    printf("Введите точность >> ");
    scanf("%lf", &e);
    int n = 1;
    double In = f(n), I2n = f(2*n);
    while((fabs(I2n - In) / 3) >= e)
    {
        printf("%lf для n = %d \n", I2n, n*2);
        n *= 2;
        In = I2n;
        I2n = f(2*n);
    }
    printf("%lf \n", I2n);
    return 0;
}
