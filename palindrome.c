# include<stdio.h>
void main()
{
    int n, result=0, q, rem;
    printf("enter a number: ");
    scanf("%d", &n);

    q = n;
    while(q != 0)
    {
        rem = q % 10;
        result = result * 10 + rem;
        q = q /10;
    }
    if(result == n)
    {
        printf("%d is a palindome number", n);
    }
    else
    {
        printf("%d is not a palindome number", n);
    }
}