#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "headers/time.h"

char* GetTimeNow(){
    time_t t;
    time(&t);

    char* date_time_now = ctime(&t);

    // Storing time xx:xx:xx
    char* res = (char*)malloc(sizeof(char) * 9);  // Allocate memory for 5 characters and '\0'


    printf("\nThis program has been written at (date and time): %s", date_time_now);
    
    int j = 0;
    int size = strlen(date_time_now);
    
    printf("%d",size);

        for (int i = size - 14; i < size - 6; i++) {  // Start from index 11 to skip the space before the time
            res[j] = date_time_now[i];
            j++;
        }
        res[j] = '\0';  // Null-terminate the string


    return res;
}
