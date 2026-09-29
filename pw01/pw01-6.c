#include <stdio.h>

int main(void)
{
    const int YEARS = 18;
    const int DAYS_PER_YEAR = 365;
    const int HOURS_PER_DAY = 24;
    const int TICKS_PER_HOUR = 3600;
    int days, hours, ticks;

    days = YEARS * DAYS_PER_YEAR;
    hours = days * HOURS_PER_DAY;
    ticks = hours * TICKS_PER_HOUR;

    printf("Тики: %d|Часы: %d|Дни: %d|Годы: %d\n", ticks, hours, days, YEARS);

    return 0;
}