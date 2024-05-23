//BITWISE
/*
#include <stdio.h>
#include <stdlib.h>
void print_bin(short val);
int main()
{
    unsigned char  PORT =0xC0 ;

    //mettre en niveau 1 le bit 2
    PORT |=(1<<2) ;
    print_bin(PORT);

    //mettre en niveau 0 le bit 7
    PORT&=~(1<<7);
    print_bin(PORT);

    //inversion valeur de bit 6
    PORT ^=(1<<6);
    print_bin(PORT);

    PORT ^= (1<<6);
    print_bin(PORT);

    //commbinaison
    PORT |=(1<<2) | (1<<5) ;
    print_bin(PORT);

    PORT &= ~(1<<2) & ~(1<<5);
     print_bin(PORT);

    PORT ^= (1<<7) | (1<<1) ;
    print_bin(PORT);

    PORT&=~(1<<6);
    if(PORT&(1<<6))
        printf("OK \n");
    else
        printf("NOK\n");

    printf("\n\nEnd.");
    return 0;
}

void print_bin(short val)
{
    short i ;
    for (i=7;i>=0;i--)
        printf("%c",(val&(1<<i))? '1':'0');
    putchar('b');
    putchar('\n');
}


*/
