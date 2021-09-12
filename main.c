#include <stdio.h>
int main()
{
    int n = 5, *i = &n;
    printf("%d", sizeof(*i));
}
