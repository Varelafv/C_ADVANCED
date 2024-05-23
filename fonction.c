#include <stdio.h>
#include "fonction.h"

void print_bin(short val)
{
    short i ;
    for (i=7;i>=0;i--)
        printf("%c",(val&(1<<i))? '1':'0');
    putchar('b');
    putchar('\n');

    }
void afecter(struct TEMPS *VARIABLE){
VARIABLE->HEURES = 0x20;
VARIABLE->MINUTOS =0x32;
VARIABLE->SECONDES =2.4;

}
