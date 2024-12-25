#include <stdio.h>
int main(){
    int i,num = 10;

    printf("the 10 table in reverse is :- \n");
    for(i=10 ; i>=1; i-- ){
        int multi = num*i;
    printf("%d * %d = %d\n", num,i,multi);
    }
    return 0;
}
