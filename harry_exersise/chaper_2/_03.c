// 3. Write a program to check whether a number is divisible by 97 or not

#include <stdio.h>
int main() {
int num;
printf("please enter a number :- ");
scanf("%d" , &num);

if (num%97 == 0) {
 printf("yes. %d is divided by 97" , num);
}
else {

printf("no. %d is not divided by 97" , num);
}





return 0;
}
