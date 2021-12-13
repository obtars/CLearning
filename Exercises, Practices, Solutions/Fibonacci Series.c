#include <stdio.h>
int main()
{
    int i,num,n=1,p=0,t;
    scanf("%d",&num);

    for(i=0;i<num;i++)
    {
        printf("%d,",p);
        t=p+n;
        p=n;
        n=t;
    }
}
