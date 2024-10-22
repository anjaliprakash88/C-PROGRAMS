# include<stdio.h>
# include<string.h>
int main(){
    // char x[15] = {'h' ,'e', 'l', 'o'};
    // char y[15] = "hello world";
    // printf("%c\n", x[1]);
    // printf("%d\n", strlen(y));
    // char x[20];
    // strcpy(x, y);
    // printf("%s\n", x);
    // printf("%s\n", y);
    char x[15] = "HELLO";
    char y[20] = "world";
    // strcat(x, y);
    // printf("%s", x)
    // if(strcmp(x, y) == 0){
    //     printf("the strings are equal");
    // }
    // else{
    //     printf("strings are not equal");
    // }
    printf("%s\n", x);
    printf("%s\n", strlwr(x));
    printf("%s", strupr(x));
}