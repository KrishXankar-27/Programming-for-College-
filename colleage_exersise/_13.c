/*
13. Write a ¢ program to add first n numbers using while loop.
*/
#include <stdio.h>
int main(){
	int num, i , sum=0;
    printf("enter a natarul number :- ");
    scanf("%d", &num);	
    
 for (int i=1;i<=num;i++){
 sum += i;

 }
  printf("%d\n",sum);
 
    return 0;
}
