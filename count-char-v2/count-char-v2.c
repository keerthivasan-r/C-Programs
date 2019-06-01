#include<stdio.h>

main(){
    double nc = 0;
    for(nc = 0;getchar() != EOF;++nc) // This loop doesn't have body for for loop
        ;
    printf("Total number of chars : %6.1f\n",nc);
    return 0;
}
