#include<stdio.h>

main(){
int c = getchar(); // reads the next character from input
while((c != EOF)){ // checks for EOF char
putchar(c); // writes char to output
c = getchar();
}
}
