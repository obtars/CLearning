#include <stdio.h>

int main() {

    int n,x,i,sum=0;
    scanf("%d%d",&n,&x);

    if(5<=n && n<=100 && 2<=x && x<=9)
    {
        for(i=1;i=n;i++)
        {
            sum+= pow(i,x);
        }
    printf("%d",sum);
    }else
    {
        printf("Enter The first value between 5 to 100 \nAnd the second value between 2 to 9\n");
    }

    return 0;
}

