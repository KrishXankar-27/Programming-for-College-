#include <stdio.h>
int main(){
    first();
    return 0;
}
void first(){
    printf("Good Morning\n");
    secoend();
}
void secoend(){
    printf("Good Evening\n");
    third();
}

void third(){
    printf("Good Night\n");
}