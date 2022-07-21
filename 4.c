#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void TRIANGLE(float a ){
    printf("perimetri: %lf\n", a*3);
    printf("yuzasi: %lf\n\n",(a*a*sqrt(3))/4 );
}
int main (){
    double A=3, B=3, C=3;
    TRIANGLE (A);
    TRIANGLE (B);
    TRIANGLE (C);


    return 0;
}