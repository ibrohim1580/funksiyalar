#include <stdio.h>
#include <stdbool.h>
#include <math.h>


void even(int k){
    if (k/2){
        printf("true");
    }else if(k/2){
        printf("false");
    }
}
int main (){
    int k;
    printf("1-k ni kiriting ");
    scanf("%d", &k);

    printf("2-k ni kiriting ");
    scanf("%d", &k);

    printf("3-k ni kiriting " );
    scanf("%d", &k);

    even (k);
    return 0;
 
}

