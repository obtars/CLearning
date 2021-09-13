#include <stdio.h>

int swapValue(int a, int b){
    int temp;

    temp = a;
    a = b;
    b = temp;
    printf("a = %d\nb = %d\n",a,b);

    return 0;
}

int main(){

    int a = 5, b = 8;
    printf("a = %d\nb = %d\n\n",a,b);
    swapValue(a,b);
    return 0;
}
