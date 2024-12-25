#include <stdio.h>
int main(){
    int num , i=1 , result = 1;
    printf("so please enter a number :- ");
    scanf("%d", &num);
    if(num<0){
printf("you enter negetive number");
return 1;
}
    
    while(i<=num){
    result *= i;
    i++;
    }
    printf("%d\n",result);
    return 0;
}



