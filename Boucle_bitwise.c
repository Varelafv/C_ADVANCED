 /*
//
#include <stdio.h>
#include <stdlib.h>

void print_bin(short val);
int main()
{   unsigned short PORT=0x00;
    print_bin(PORT);
    short i,t=0 ;
    for(i=0;i<8;i++){
     PORT|=(1<<i);
     print_bin(PORT);
     if(i==7 && t<=3){
     i=0;
     PORT =0x00;
     t++;
      putchar('\n');
      print_bin(PORT);
     }
    }

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
