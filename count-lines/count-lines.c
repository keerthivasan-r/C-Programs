#include<stdio.h>

main(){
int c;
int nl = 0;
while((c = getchar()) != EOF){
    if(c == '\n')
        nl++;
}
printf("Number of lines : %5.0d",nl);
return 0;
}
