# include<stdio.h>
# include<math.h>
int main()
{
    double principal, rate, time, compoundinterest;
    int n;
    
    printf("enter the principal amount: ");
    scanf("%lf", &principal);

    printf("enter the annual interest rate: ");
    scanf("%lf", &rate);

    printf("enter the time in year: ");
    scanf("%lf", &time);

    printf("enter the number of times interest is compounded per year: ");
    scanf("%d", &n);

    compoundinterest = principal * pow(1 + (rate / n), n * time) * principal;
    
    print("compoundinterest: %.2lf\n", compoundinterest);
    return 0
}