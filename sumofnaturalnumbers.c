#include<stdio.h>
int main()
{
    int num, count=1, sum = 0;

    printf("enter a number: ")
    scanf("%d", &num);

    while(count < num)
    {
        sum = sum + count;
        count++
    }
    print("sum : %d", sum);
    return 0
}