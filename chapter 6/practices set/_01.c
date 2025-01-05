// 1. Write a program to print the address of a variable. Use this address to get the value of the variable.

#include <stdio.h>
int main(){
    int a = 10;
    int*j = &a;

    printf("the address of %d is %p\n " ,a,&a ); 
    printf("the address of %d is %p which is store in j\n" ,a, j ); 
    return 0;
}
