/*
15. Write a ¢ program to add even numbers in a given range.
*/
#include <stdio.h>
int main(){
int num , sum = 0;
    printf("ener a number :- ");
    scanf("%d" , &num);
    printf(" add all even numbers in %d\n" , num);    
    for(int i = 1; i<=num;i++){
    if(i%2 == 0 ){
    sum += i;
    }
    }
    printf("%d",sum);
    return 0;
}
