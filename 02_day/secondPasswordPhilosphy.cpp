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
    unsigned int first, second;
    char rulingChar;
    char password[20];
    while(fscanf(fp, "%d-%d %c: %s", &first, &second, &rulingChar, &password[0]) != EOF)
    {
        first--;
        second--;
        bool check = (password[first] == rulingChar && password[second] !=
                rulingChar) || (password[first] != rulingChar &&
                password[second] == rulingChar);
        if(check)
        {
            validCount++;
        }
    }
    printf("%d\n", validCount);
    fclose(fp);
    return 0;
}
