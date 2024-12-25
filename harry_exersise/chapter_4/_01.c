#include <stdio.h>
int main(){
	int num ,i;
	int multi = num*i;
    printf("please enter a number to get his table :- ");
    scanf("%d" , &num);
    for(i=1; i<=10;i++){
    	int multi = num*i;
    printf(" %d * %d =  %d\n" , num,i,multi);
    }
    return 0;
}
