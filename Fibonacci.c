#include<stdio.h>    
int main()    
{    
    int n1=0,n2=1,n3,i=0,number;    
    printf("Enter the number of elements:");    
    scanf("%d",&number);     
    while(i<number)
    {   
        printf(" %d\n",n1);  
        n3=n1+n2;  
        n1=n2;    
        n2=n3;
        i++; 
    }  
    return 0;  
} 