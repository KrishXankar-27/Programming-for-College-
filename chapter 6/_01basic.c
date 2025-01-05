#include <stdio.h>
int main(){
    int a = 50;
    int *j = &a;
    printf("%p\n" , &a);
    printf("%p\n" , j);
    printf("%d\n" , *j);
    return 0;
}
