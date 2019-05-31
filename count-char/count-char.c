#include<stdio.h>

/*
* Program count the number of characters from input
*
*/
main(){
int nc = 0;
while(getchar() != EOF)
  ++nc;
printf("The number of characters : %d",nc);
return 0;
}
