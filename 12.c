#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void Sortlnc(int A, int B, int C){
    if(A>B && B>C){
        printf("Eng kattasi: %d\n", A);
        printf("O`rtanchasi: %d\n", B);
        printf("Kichigi: %d", C);
    }else if(B>A && A>C){
        printf("Eng kattasi: %d\n", B);
        printf("O`rtanchasi: %d\n", A);
        printf("Kichigi: %d", C);
    }else if(C>A && A>B){
        printf("Eng kattasi: %d\n", C);
        printf("O`rtanchasi: %d\n", A);
        printf("Kichigi: %d", B);
    }else if(A>C && C>B){
        printf("Eng kattasi: %d\n", A);
        printf("O`rtanchasi: %d\n", C);
        printf("Kichigi: %d", B);
    }else if(B>C && C>A){
        printf("Eng kattasi: %d\n", B);
        printf("O`rtanchasi: %d\n", C);
        printf("Kichigi: %d", A);
    }else if(C>B && C>A){
        printf("Eng kattasi: %d\n", C);
        printf("O`rtanchasi: %d\n", B);
        printf("Kichigi: %d", A);
    }
}
int main (){
        int A,B,C;
        printf("A ni kiriting ");
        scanf("%d", &A);

        printf("B ni kiriting ");
        scanf("%d", &B);

        printf("C ni kiriting ");
        scanf("%d", &C);

        Sortlnc(A,B,C);
        return 0;       

    }
