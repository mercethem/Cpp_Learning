/*
 When call this function call parameter to :
 parameter is -1 return value of time is current time
 other values return what did you use operand is
 */
#include <iostream>
#include <ctime>

void print_date (int day = -1, int mon = -1, int year = -1);

void print_date (int d, int m, int y)
{
    if (y == -1) {
        std::time_t timer;
        std::time (&timer);
        tm *p = std::localtime (&timer);
        y = p->tm_year + 1900;
        if (m == -1) {
            m = p->tm_mon + 1;
            if (d == -1) {
                d = p->tm_mday;
            }
        }
    }
    printf ("%02d-%02d-%d\n", d, m, y);
}

int main ()
{
    print_date (1, 2, 3);  //01-02-3 // ALL YOURS
    print_date (1, 2);        //01-02-2024 YOUR DAY AND MON BUT CURRENT OTHERS
    print_date (1);              //01-03-2024 YOUR DAY BUT CURRENT OTHERS
    print_date ();                  //11-03-2024 CURRENT

    return 0;
}
