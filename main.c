#include<stdio.h>


int main()
{
    int index;
    int days [12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    for (index = 0;index<=12;index++)
    {
        printf("Month %d has %d days\n",index+1,days[index]);
    }

   return 0;
}
