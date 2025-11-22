//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun",
                      "Jul","Aug","Sep","Oct","Nov","Dec"};
    int monthNum;

    // Input date
    gets(date);

    // Extract day, month, year
    day[0] = date[0];
    day[1] = date[1];
    day[2] = '\0';

    month[0] = date[3];
    month[1] = date[4];
    month[2] = '\0';

    year[0] = date[6];
    year[1] = date[7];
    year[2] = date[8];
    year[3] = date[9];
    year[4] = '\0';

    // Convert month to number
    monthNum = (month[0] - '0') * 10 + (month[1] - '0');

    // Print in new format
    printf("%s-%s-%s", day, months[monthNum - 1], year);

    return 0;
}
