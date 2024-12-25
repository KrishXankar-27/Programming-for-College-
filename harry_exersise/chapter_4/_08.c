#include <stdio.h>
int main(){
    int num , i , result = 1;
    printf("so please enter a number :- ");
    scanf("%d", &num);
    if(num<0){
printf("you enter negetive number");
return 1;
}
    for(i=1;i<=num;i++){
	result *= i; 
    }
     printf("%d\n",result);
    return 0;
}
