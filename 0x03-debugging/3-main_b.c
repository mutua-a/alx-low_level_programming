#include <stdio.h>
#include "main.h"
/**
* is_leap_year - checks if a year is a leap year
* @year: year
* Return: 1 if year is a leap year, 0 otherwise
*/

int is_leap_year(int year)
{
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
