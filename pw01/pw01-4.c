#include <stdio.h>

int main(void)
{
    int years, day_per_year, total_days;

    years = 3;
    day_per_year = 365;
    total_days = years*day_per_year;

    printf("YEARS = %d\n", years);
    printf("DAYS_PER_YEAR = %d\n", day_per_year);
    printf("TOTAL_DAYS = %d\n", total_days);

    return 0;
}