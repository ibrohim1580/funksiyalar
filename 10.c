#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Swap(int a,int b){
    int x;
    x=a;
    a=b; b=x;

    printf("berilgan = %d, %d\n ozgargan= %d, %d/n" ,a , b, b, a );

}
int  main (){
    int a,b;
    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    Swap(a,b);
}