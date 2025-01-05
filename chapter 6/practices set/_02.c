// 2. Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?


#include <stdio.h>
int address(int num){
    printf("the address of i is %p\n", num);
}
int main(){
    int i = 10;
    address(i);
    return 0;
}

// 