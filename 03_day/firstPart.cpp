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
    unsigned int count = 0;
    FILE * fp = fopen("input.txt", "r");

    char line[31];
    const int modder = 31;

    int currentPos = 0;

    fscanf(fp, "%s\n", &line[0]);

    if(line[currentPos] == '#')
        count++;

    while(fscanf(fp, "%s\n", &line[0]) > 0)
    {
        currentPos = (currentPos + 7) % 31;
        if(line[currentPos]=='#')
            count++;
    }
    printf("%d\n", count);

    fclose(fp);
    return 0;
}
