/*
6. Write a program to find greatest of four numbers entered by the user
*/
#include <stdio.h>
int main(){

 int num1,num2,num3,num4;
 printf("please enter the number:- ");
 scanf("%d",&num1);
 printf("please enter the number:- ");
 scanf("%d",&num2);
 printf("please enter the number:- ");
 scanf("%d",&num3);
 printf("please enter the number:- ");
 scanf("%d",&num4);
 if (num1 > num2 && num3 && num4)
 {
    printf("all number are %d %d %d %d so number1  %d so it is bigger\n " , num1,num2,num3, num4, num1);
 }
 else if (num2 >  num1 && num3 && num4)
 {
     printf("all number are %d %d %d %d so number2  %d so it is bigger\n " , num1,num2,num3, num4, num2);
 }
 else if (num3 >  num1 && num2 && num4)
 {
   printf("all number are %d %d %d %d so number3  %d so it is bigger\n " , num1,num2,num3, num4, num3);
 }
 else if (num4 >num1 && num2 && num3 )
 {
    printf("all number are %d %d %d %d so number4  %d so it is bigger\n " , num1,num2,num3, num4, num4);
 }   return 0;
}