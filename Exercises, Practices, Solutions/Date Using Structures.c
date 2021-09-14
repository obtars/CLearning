#include <stdio.h>

int main()
{
    struct date
    {
        int day;
        int month;
        int year;
    };

    struct date today = {9,14,2021};

    printf("%d/%d/%d",today.day,today.month,today.year);

    return 0;
}
