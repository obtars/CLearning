#include <stdio.h>
int main() {
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct date allDays[10];

    allDays[1].day=10;
    allDays[1].month=9;
    allDays[1].year=2021;

    printf("%d\n",allDays[1].year);

    struct date weakened[4] = {{10,9,2021},{56,54,223,},[3]={32,226,266}};
    printf("%d",weakened[3].year);

    return 0;
}
