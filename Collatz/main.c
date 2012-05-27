//
//  main.c
//  Collatz
//
//  Created by Matthias Lemmens on 28/11/11.
//  Copyright (c) 2011 Lemmens inc. All rights reserved.
//

#include <stdio.h>

void verwerk(int* getalp, int* counterp)
{ 
    // Nodige bewerking op uitvoeren
    
    if ((*getalp % 2) == 0) {
        *getalp = *getalp / 2;
    } else {
        *getalp = (3 * *getalp) + 1;
    }
    
    // Teller + 1 (begint bij 0, dus optellen voor afdrukken)
    
    *counterp += 1;

    // Teller en getal afdrukken
    
    printf("%d: %d \n", *counterp, *getalp);
    
    // Verdergaan of eindigen
    
    if (*getalp != 1) {
        verwerk(getalp, counterp);
    } else {
        printf("There were %d steps in the process. You're welcome.\n", *counterp);
    }
}

int main (int argc, const char * argv[])
{
    int getal, counter;
    
    printf("Hello ladies! Give me a number, and I'll show you it's Collatz conjecture all night long...:");
    scanf("%d", &getal);
    
    verwerk(&getal, &counter);
}

