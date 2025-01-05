// 4. Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>
int main(){
    int num , fibo , fiboseris,fib1 =0,fib2 =1;
    printf("enter a number :-");
    scanf("%d" , &num);

    if(num == 0 || num == 1){
        return 0;
    }
    for (int i = 2; i <= num; i++) {
        fibo = fib1 + fib2; 
        fib1 = fib2;        
        fib2 = fibo;        
    }
    int result = fibo;
    printf("%d\n", result);
    return 0;
}