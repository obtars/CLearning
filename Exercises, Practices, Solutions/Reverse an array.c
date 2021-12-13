#include <stdio.h>
int main()
{
    int i,s;
    scanf("%d",&s);
    int arr[s];

    for(i=1;i<=s;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=s;i>0;i--)
    {
        printf("%d\n",arr[i]);
    }
}
