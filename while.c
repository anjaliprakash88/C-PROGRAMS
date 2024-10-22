// # include<stdio.h>
// int main(){
//     int i = 0;
//     while(i<=5){
//         printf("%d\n", i);
//         i = i + 1;
//     }

//     return 0
// }


// # include<stdio.h>
// int main(){
//     int i = 0;
//     do{
//         printf("%d\n", i);
//         i++;
//     }
//     while(i>=5);

//     return 0;
// }


// NESTED FOR LOOP
// for(initiazation; condition; incerment/decrement){
//     for(initiazation; condition; incerment/decrement){
//         block of code
//     }
// }



// # include<stdio.h>
// int main(){                                  
//     for(int i = 0; i <= 3; i++){
//         printf("%d\n", i);
//         for(int j = 0; j <= 5; j++){
//             printf("%d\n", j);
//     }
// }
// return 0;
// }

# include<stdio.h>
int main(){                                  
    for(int i = 0; i <= 5; i++){
        if(i == 3){
            continue;
        }
        printf("%d\n", i);
    }

return 0;
}

 