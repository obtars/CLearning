#include <stdio.h>
int main()
{
    int i,s,j,c=0;
    scanf("%d",&s);
    int arr[s];

    for(i=1;i<=s;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=s,j=1;i>0;i--,j++)
    {
        if(arr[i]==arr[j])
        {

            c++;

        }else
        {
            printf("Not Palindrome");
            break;
            return 0;
        }
    }

    if(c==s)
    {
        printf("Palindrome");
    }

return 0;
}
