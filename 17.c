#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void kavadrat(int a, int b, int c){

    float natija=((pow(a,2)-4*a*c)/a*2);
    printf("Natija: %1.f", natija);
}
int main (){
    int a, b,c;
    printf("a ni kiriting: ");
    scanf("%d", &a);
    
    printf("b ni kiriting: ");
    scanf("%d", &b);    
    
    printf("c ni kiriting: ");
    scanf("%d", &c);

    kavadrat(a,b,c);
    return 0;
}