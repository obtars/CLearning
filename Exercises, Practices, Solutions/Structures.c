#include <stdio.h>

int main() {

    struct date
    {
        int year;
        int month;
        int day;
    };

    struct date today;
    struct date yesterday = {2021,9,25};
    struct date tomorrow = {.day = 27,.month = 9,.year = 2021};

    today.year = 2021;
    today.month = 9;
    today.day = 26;

    printf("Tomorrow: %d/%d/%d\n",tomorrow.day,tomorrow.month,tomorrow.year);
    printf("Today: %d/%d/%d\n",today.day,today.month,today.year);
    printf("Yesterday: %d/%d/%d\n",yesterday.day,yesterday.month,yesterday.year);

    return 0;
}
