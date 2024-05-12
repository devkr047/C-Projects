#ifndef CURRTIME_H
#define CURRTIME_H
#include<time.h>
struct tm currenttime(void);
struct tm currenttime()
{
    time_t now;
    struct tm *current_time;
    time(&now);
    current_time=localtime(&now);
    return *current_time;
}
int hour()
{
    struct tm current_time;
    current_time=currenttime();
    return current_time.tm_hour;
}
int minute()
{
    struct tm current_time;
    current_time=currenttime();
    return current_time.tm_min;
}
int second()
{
    struct tm current_time;
    current_time=currenttime();
    return current_time.tm_sec;
}
#endif