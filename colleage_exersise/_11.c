/*
11. Write a ¢ program to print first n natural numbers using while loop.
*/
#include <stdio.h>
int main(){
	int num;
    printf("enter a natarul number :- ");
    scanf("%d", &num);	
    
    int i=1;
    while (i<=num){
     printf("%d " , i);
    i++;
    }
    return 0;
}
