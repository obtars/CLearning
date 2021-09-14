#include <stdio.h>

int swapData(int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

int main(){

    int a = 5, b = 8;
    printf("a = %d\nb = %d\n\n",a,b);

    swapData(&a, &b);

    printf("a = %d\nb = %d\n",a,b);
    return 0;
}
