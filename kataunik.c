#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    char a [101] , b [101];
    
    scanf ("%s", a);
    scanf ("%s", b);
    
    if (strlen (a) != strlen (b)) {
        printf ("BERBEDA\n");
    } else {
        if ( strcmp (a,b)== 0) {
            printf ("IDENTIK\n");
        } else {
            printf ("MIRIP\n");
        }
    }

   
    return 0;
}