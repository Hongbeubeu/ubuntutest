#include <stdio.h>

int main(void){
    double x = 100.1, y;
    double *p;

    p = &x;
    y = *p;

    printf("%f\n", y);
    return 0;
}