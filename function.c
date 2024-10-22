// //  function without argument without return value

// # include<stdio.h>
// void sum(){
//     int x = 10;
//     int y = 20;
//     int sum = x + y;
//     printf("%d\n", sum); 
// }
// int main(){
//     sum();

// }

//  function with argument without return value

# include<stdio.h>
void sum(int x, int y){
    int sum = x + y;
    printf("%d\n", sum); 
}
int main(){
    sum(10, 20);

}