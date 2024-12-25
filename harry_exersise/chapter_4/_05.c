#include <stdio.h>
int main(){
	int num,i,j, limit; 
    printf("enter any number to see his next 10 natural number :-");
    scanf("%d" , &num);
    limit = num+10;
    for(i=num; i<=limit; i++){  
    printf("%d its next 10 natural num is %d\n" , num,i);
    }
    
    return 0;
}
