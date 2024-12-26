/*
12. Write a ¢ program to print all the odd numbers in a given range.
*/

#include <stdio.h>
int main(){
	int num, i;
    printf("enter a natarul number :- ");
    scanf("%d", &num);	
    
     printf("1 to %d  odd number are:-\n" , num );
 for (int i=1;i<=num;i++){

    if(i%2 != 0) {
    printf("%d , " ,i);
    }
 }
    return 0;
}
