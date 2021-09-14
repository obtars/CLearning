#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{

    int i,x[100]={a,b,c,d};

    for (i==0;i<=4;i++)
    {
        if(x[0]<x[i])
        {
            x[0]=x[i];
        }
    }

    return x[0];
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}