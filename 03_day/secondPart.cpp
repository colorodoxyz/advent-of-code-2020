/**
 * Author: Spencer Liu
 * Date: 2 December, 2020
 * Sources: N/A
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main()
{
    unsigned int countA = 0;
    unsigned int countB = 0;
    unsigned int countC = 0;
    unsigned int countD = 0;
    unsigned int countE = 0;
    bool tracker = false;
    FILE * fp = fopen("input.txt", "r");
    int linecount = 0;

    char line[31];
    const int modder = 31;

    int currentPosA = 0;
    int currentPosB = 0;
    int currentPosC = 0;
    int currentPosD = 0;
    int currentPosE = 0;

    fscanf(fp, "%s\n", &line[0]);

    if(line[currentPosE] == '#')
        countE++;

    while(fscanf(fp, "%s\n", &line[0]) > 0)
    {
        if(tracker)
            currentPosE = (currentPosE + 1) % 31;

        if(tracker){
            if(line[currentPosE] == '#')
            {
                countE++;
            }
            linecount++;
            tracker = false;
        }
        else
            tracker = true;
    }
printf("%d\n", linecount);

    printf("%d\n", countE);

    fclose(fp);
    return 0;
}
