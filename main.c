#include <stdio.h>

int swapData(int a, int b){
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
    swapData(a,b);
    return 0;
}
