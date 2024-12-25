#include <stdio.h>
int main(){
	int num,i,j, limit; 
    printf("enter any number to see his next 10 natural number :-\n");
    scanf("%d" , &num);
    limit = num+10;
    i = num+1;
 /*
  do {
  printf("%d\n", i);
  i++;

  }
  while(i<=limit);
*/

 while (i<=limit) {
     printf("the next natural num is  :-%d\n", i);
 i++;
 }
    return 0;
}
