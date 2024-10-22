#include<stdio.h>
int main(){
    int x, a = 10, b= 20, result;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
    printf("enter a number upto 1- 4\n");
    scanf("%d", &x);
    switch(x){
        case 1:
        result =  a + b;
        printf("%d", result);
        break;
        case 12:
        result =  a - b;
        printf("%d", result);
        break;
        case 3:
        result =  a * b;
        printf("%d", result);
        break;
        case 4:
        result =  a / b;
        printf("%d", result);
        break;
        default:
        printf("invaild");
    }
    return 0;
}