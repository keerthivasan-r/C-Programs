#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 10

main(){
    int fahr;
    printf("Fahrenheit To Celsius Conversion\n");
    printf("----------------------------------\n");
    for(fahr = LOWER;fahr <= UPPER;fahr = fahr+STEP){
        printf("%3d\t%6.2d\n",fahr,(5 * (fahr -32)/9));
    }
}
