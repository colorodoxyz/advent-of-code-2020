/**
 * Author: Spencer Liu
 * Date: 01 December, 2020
 * Sources: N/A
 */
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

const int LINE_COUNT = 1000;
int main()
{
    unsigned int validCount = 0;
    FILE * fp = fopen("input.txt", "r");
    unsigned int min, max;
    char rulingChar;
    char password[20];
    while(fscanf(fp, "%d-%d %c: %s", &min, &max, &rulingChar, &password[0]) != EOF)
    {
        unsigned int counter = 0, passLen = strlen(password);
        for(unsigned int i = 0; i < passLen; i++)
        {
            if(password[i] == rulingChar)
            {
                counter++;
            }
        }
        if(counter >= min && counter <= max)
        {
            validCount++;
        }
    }
    printf("%d\n", validCount);
    fclose(fp);
    return 0;
}
