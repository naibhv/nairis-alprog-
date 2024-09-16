#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,y,z;
    scanf ("%d" , &x);
    y =0;
    
    for (z =1 ; z <= x; z++){
        if ( x% z ==0 ) y++;
    }
    if (y == 2 ) {
        printf ("PRIMA");
    }
        else {
            printf ("BUKAN");
        }
    
    return 0;
}