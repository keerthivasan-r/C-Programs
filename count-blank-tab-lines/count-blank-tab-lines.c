#include<stdio.h>

main(){
    int c;
    int nb = 0,nt = 0,nl = 0;
    while((c = getchar()) != EOF){
        if(c == ' '){
            ++nb;
        }
        if(c == '\t'){
            ++nt;
        }
        if(c == '\n'){
            ++nl;
        }
    }
    printf("Found %5.0d blanks\n",nb);
    printf("Found %5.0d tabs\n",nt);
    printf("Found %5.0d lines\n",nl);
}
