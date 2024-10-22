//  function without argument with return value

# include<stdio.h>
int sum(){
    int x = 10;
    int y = 20;
    int sum = x + y;
    return sum;
}
int main(){
    int x = sum();
    printf("%d\n", x);

}