#include <stdio.h>
int main()
{
    char myChar;
    int myInt;
    float myFloat;
    double myDouble;
    _Bool myBool;

    myChar = 'C';
    myInt = 20;
    myFloat = 20.1465;
    myDouble = 4.53e+11;
    myBool = 0;

    printf("int = %i\n", myInt);
    printf("Char = %c\n", myChar);
    printf("float = %f\n", myFloat);
    printf("Double = %e\n", myDouble);
    printf("Bool = %d\n", myBool);

    return 0;
}
