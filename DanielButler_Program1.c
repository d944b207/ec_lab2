#include <stdio.h>

int main (void) {
    float sales[12];
    int max = 12;
    for (int i = 0; i < max; i++ ) {
        printf("Enter the sales for month %d : \n" , i 
        + 1 ) ;
        scanf("%f" , &sales[i]);
        printf("%f" , sales[i]);
    }
}