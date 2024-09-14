#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sort (int arr[], int n) {
    int a,d,e;
    
    for (a=0; a<n-1; a++){
        for (d=0; d<n-a-1; d++){
            if (arr [d]> arr [d+1]){
                
                e = arr[d];
                arr[d] = arr[d+1];
                    arr[d+1] = e;
            }
        }
    }
}
int main() {
    int n,a;
    
    scanf("%d",&n);
    
    int nilai [n];
    
    for (a=0; a<n;a++){
        scanf ("%d", &nilai [a]);
    }
    
    sort (nilai,n);
    
    for (a=0; a<n;a++){
        printf("%d\n", nilai [a]);
    }
    
    return 0;
}
