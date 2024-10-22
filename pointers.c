// #include<stdio.h>
// int main()
// {
    // int num = 50;
    // int* p;
    // p = &num;
    // printf("address of p variable is %x\n", p);
    // printf("address of p variable is %d\n", *p);
    // return 0;


    // int x = 10;
    // int *ptr = &x;
    // *ptr= 4;
    // printf("%d\n", *ptr);
    // int*p= NULL;
// }


// Structure
// syntax
// struct structure_name
// {
//     data_type member1
//     data_type member2
//     .
//     .
//     .
//     .
//     data_type member n
// };


# include <stdio.h>
struct employee{
    int id;
    float salary;
    int mobile;
};
int main(){
    struct employee e1;
    printf("Enter the id, salary, and mobile number of the employee:\n");
    scanf("%d%f%d", &e1.id, &e1.salary, &e1.mobile);

    printf("Employee Details:\n");
    printf("ID: %d\n", e1.id);
    printf("Salary: %f\n", e1.salary);
    printf("Mobile: %d\n", e1.mobile);
    return 0;
}
