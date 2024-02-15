#include <stdio.h>
#include <stdlib.h>
#include "headers/time.h"




int main() {
    char* timeNow = GetTimeNow();
    printf("\nCurrent time: %s\n", timeNow);

    // Remember to free the dynamically allocated memory
    free(timeNow);

    return 0;
}
