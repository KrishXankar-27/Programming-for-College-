#include <stdio.h>
int main(){
int num;
    printf("please enter a number ");
    scanf("%d",&num);
    
    if(num<2){
    printf("the number is not a valid prime number");
    return 0;
    }
    
    int isPrime = 1;
	for(int i = 2; i<=num/2;i++){
		if (num % i == 0) {
      	isPrime = 0; 
      	break;
	}
	}
	if(isPrime){
	printf("%d is prime number\n" , num);
	}
	else{
	printf("%d is not  prime number\n" , num);
	}
    return 0;
}
