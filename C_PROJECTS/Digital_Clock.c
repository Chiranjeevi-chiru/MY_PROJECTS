#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <time.h>

int main() {

    time_t rawtime = 0; //Jan 1 1970(Epoch)
    struct tm *pTime = NULL;

    printf("DIGITAL CLOAK\n");

    while(1){

        time(&rawtime);

        pTime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);

        sleep(1);
    }

    return 0;
}


