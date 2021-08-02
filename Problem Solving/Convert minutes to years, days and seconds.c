/*
Convert minutes to years, days and seconds
Author: Tawhid Monowar
*/

#include <stdio.h>
int main()
{
    int minutes,minutesInaYear = 525600,minutesInaDay = 1440;
    double days,years,seconds;

    printf("Convert minutes to years, days and seconds, Author: Tawhid Monowar\n\n");
    printf("Enter the number of minutes:");
    scanf("%d",&minutes);

    years = minutes/ (double)minutesInaYear;
    printf("\n%d minutes = %f Years\n",minutes,years);
    days = minutes/ (double)minutesInaDay;
    printf("%d minutes = %f Days\n",minutes,days);
    seconds = minutes * 60;
    printf("%d minutes = %f Seconds\n\n",minutes,seconds);



    return 0;
}


