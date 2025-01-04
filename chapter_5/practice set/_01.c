// 1. Write a program using function to find average of three numbers.

#include <stdio.h>
int avarage (int num1,int num2,int num3 ){
    
     return (num1+num2+num3)/3;
}
int main(){
    int num1,num2,num3, total;
    printf("please enter the first number:- ");
    scanf("%d" , &num1);
    printf("please enter the second number:- ");
    scanf("%d" , &num2);
    printf("please enter the third number:- ");
    scanf("%d" , &num3);

    printf("so total of number1:- %d number2:- %d number3:- %d\n so avarage is %d\n" , num1 ,num2 ,num3 , avarage(num1,num2,num3));
    return 0;
}
