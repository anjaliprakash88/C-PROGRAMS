# include<stdio.h>
void main()
{
    float p, r, n, si;

    printf("enter the principal amount: ");
    scanf("%f", &p);

    printf("enter the rate of interest: ");
    scanf("%f", &r);

    printf("enter the no.of years: ");
    scanf("%f", &n);

    si = (p*n*r)/100;
    printf("simple interst is: %f", si);
    return 0;
}