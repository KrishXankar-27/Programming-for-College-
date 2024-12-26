/*
16. Write a ¢ program to find the factorial of a given number.
*/
#include <stdio.h>
int main(){
int num,i,result = 1;
    printf("please enter a number for ");
    scanf("%d",&num);
    if(num<0){
    printf("you enter a negetive number");
    return 1;
    }
    for(i = 2; i<=num;i++){
    result *= i;
    }
    printf("%d" , result);
    return 0;
}
