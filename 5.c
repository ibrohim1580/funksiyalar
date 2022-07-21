#include <stdio.h>
#include <stdbool.h>
#include <math.h>



void RectPS (int x1, int y1, int x2, int y2){
    int a,b;
    a=fabs(x2-x1);
    b=fabs(y2-y1);

    printf("Perimetri: %d\n", 2*(a+b));
    printf("Yuzasi: %d\n,", a*b);
}
int main (){
    double a=2, b=3,c=4,d=5,e=9;
    RectPS (a,b,c,d);
    RectPS(b,c,d,e);

    return 0;
}