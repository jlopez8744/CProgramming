/*
    The program converts the givenn umber of seconds to HMS.

    65 seconds -> 0 hours 1 minute 5 seconds
*/

#include <stdio.h>

int main() {
    int seconds_org;

    // Get the number of seconds
    puts("Enter the number of seconds");
    scanf("%d", &seconds_org);
    int seconds = seconds_org;

    // Calculate the number of hours
    int hours = seconds / 3600;
    seconds = seconds % 3600;

    //Calculate the number of minutes
    int minutes = seconds / 60;
    seconds = seconds % 60;

    printf("%d seconds is %d Hour(s), %d Minute(s), and %d Second(s)", seconds_org, hours, minutes, seconds);

    return 0;
}