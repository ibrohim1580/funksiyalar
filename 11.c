#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Minmax(int a, int b){
    if(a>b){
        return a;
    }
    if(b<=a){
        return b;
    }
}
int main (){
    int a,b,c,d,e,f,g;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);    

    printf("c = ");
    scanf("%d", &c);

    printf("d = ");
    scanf("%d", &d);

    e=a,b;
    f=c,b;
    g=e,f;

    printf("javob: %d\n", g);
    return 0;

}
