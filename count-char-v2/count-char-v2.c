#include<stdio.h>

main(){
    double nc = 0;
    for(nc = 0;getchar() != EOF;++nc) // This loop doesn't have body for for loop
        ;
    // %f denotes both float and double values
    // .0f suppresses the decimal point
    printf("Total number of chars : %6.0f\n",nc);
    return 0;
}
