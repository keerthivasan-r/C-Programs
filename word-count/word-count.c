#include<stdio.h>

#define IN 1    // inside the word
#define OUT 0   // outside the word

int main()
{
    int c;
    int state = OUT;
    int nl,nw,nc;
    nc = nw = nl = 0;
    while((c = getchar())!= EOF)
    {
        if(c == '\n')
        {
            ++nl;
        }
        if(c == ' ' || c == '\t' || c == '\n')
        {
            state = OUT;
        }
        else if(state == OUT)
        {
            state = IN;
            ++nw;
        }
        ++nc;
    }
    printf("Number of characters : %4.0d",nc);
    printf("Number of words : %4.0d",nw);
    printf("Number of lines : %4.0d",nl);
}
