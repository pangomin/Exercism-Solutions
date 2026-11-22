#include "leap.h"

bool leap_year(int year) {
    if (year % 100)
        goto test4;
    else if (year % 400)
        return false;
    return true;
test4:
   return year % 4 == 0 ? true : false;     
}