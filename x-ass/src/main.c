#include <pioneer600.h>
#include <bcm2835.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    rtc_t rtc;

    if (!bcm2835_init()) {
        printf("BCM2835 Library init failed!\n");
        return 1;
    }

    ds3231_read(&rtc);

    bcm2835_close();

    return 0;
}