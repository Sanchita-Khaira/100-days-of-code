//Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/
#include <stdio.h>

int main() {
    // Define enum for traffic lights
    enum Traffic {RED, YELLOW, GREEN};

    // Array of enum names as strings
    const char *names[] = {"RED", "YELLOW", "GREEN"};

    // Number of elements in enum
    int n = 3;

    // Loop to print enum names and values
    for (int i = 0; i < n; i++) {
        printf("%s = %d\n", names[i], i);
    }

    return 0;
}
