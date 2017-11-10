#ifndef __PIONEER600_H__
#define __PIONEER600_H__

typedef struct {
    int year;
    char month;
    char date;
    char hour;
    char minute;
    char second;
} rtc_t;


extern int ds3231_read(rtc_t *rtc);

#endif