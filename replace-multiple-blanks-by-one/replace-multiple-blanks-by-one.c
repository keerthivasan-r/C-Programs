#include<stdio.h>

#define NON_BLANK '-'

main()
{
    int c;
    int last_char = NON_BLANK;
    while((c = getchar())!= EOF)
    {
        if(c == ' ')
        {
            if(last_char != ' ')
            {
                putchar(c);
            }

        }
        else
        {
            putchar(c);
        }
        last_char = c;
    }
    return 0;
}
