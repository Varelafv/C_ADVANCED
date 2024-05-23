#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"


struct TEMPS TIME ;

int main()
{
    TIME.HEURES=0x03;
    printf("%d \n",TIME.HEURES);
    afecter(&TIME);
    printf("%d \n",TIME.HEURES);
    printf("%d \n",TIME.MINUTOS);
    printf("%f \n",TIME.SECONDES);
    return 0;
}

