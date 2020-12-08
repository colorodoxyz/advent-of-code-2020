/**
 * Author: Spencer Liu
 * Date: 6 December, 2020
 * Sources: N/A
 */

#include <cstring>
#include <stdio.h>
#include <stdlib.h>

const int LINE_LEN = 180;
const int MAX_LINES = 594;

int main()
{
    unsigned int count = 0;
    FILE * fp = fopen("input.txt", "r");
    
    char line[LINE_LEN + 1];

    while(fgets(&line[0], LINE_LEN, fp) > 0)
    {
    }

    printf("%d\n", count);

    fclose(fp);
    return 0;
}
