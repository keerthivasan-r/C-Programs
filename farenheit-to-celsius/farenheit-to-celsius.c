#include<stdio.h>

/*
* This Program prints the Celsius to Fahrenheit table.
* It uses the Formula : C = 5/9 (F - 32)
*/

main(){

int fahr = 0,celsius = 0;
int start = 0;
int end = 300;
int step = 20;

printf("Fahrenheit to Celsius Table\n");
printf("---------------------------\n");

while(fahr <= end){
    celsius = 5 * (fahr - 32) / 9;
    printf("%6.1d\t%6.1d\n",fahr,celsius); // format modifiers used
    fahr = fahr+ step;
}

}
