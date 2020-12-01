/**
 * Author: spencer-liu
 * Date: 1 December, 2020
 * Sources: N/A
 */
#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE = 2020;
int main(int argc, char *argv[])
{
    if(argc != 2)
        return 1;
    bool bitArr[ARR_SIZE];
    char * fileName = argv[1];
    FILE * fp;
    fp = fopen(fileName, "r");
    if(fp == NULL)
        return 1;
    int num;
    while(fscanf(fp, "%d", num) != EOF)
    {
        bitArr[num] = true;
    }

    fclose(fp);
    return 0; 
}
