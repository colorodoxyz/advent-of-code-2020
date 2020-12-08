/**
 * Author: Spencer Liu
 * Date: 3 December, 2020
 * Sources: N/A
 */

#include <stdio.h>
#include <stdlib.h>
#include <cstring>

int main()
{
    unsigned int count = 0;
    FILE * fp = fopen("here.txt", "r");
    
    char line[85];
    bool tags[7] = {0};
    bool read = true;

    while(fgets(&line[0], 85, fp) > 0)
    {
        int lineLen = strlen(line);

        char tag[4];

        tag[3] = '\0';

        int index = 0;

        for(int i = 0; i < lineLen; i++)
        {
            if(line[i] == ':')
            {
                printf("%s\n", tag);
                if(strcmp(&tag[0], "byr")==0){
                    tag[0] = true;
                }
                else if(strcmp(tag, "iyr")==0){
                    tag[1] = true;
                }
                else if(strcmp(tag, "eyr")==0){
                    tag[2] = true;
                }
                else if(strcmp(tag, "hgt")==0){
                    tag[3] = true;
                }
                else if(strcmp(tag, "hcl")==0){
                    tag[4] = true;
                }
                else if(strcmp(tag, "ecl")==0){
                    tag[5] = true;
                }
                else if(strcmp(tag, "pid")==0){
                    tag[6] = true;
                }
                printf("%s\n", tag);
                read = false;
                index = 0;
            }
            else if(line[i] == ' ')
            {
                read = true;
            }
            else
            {
                if(index < 3 && read){
                    tag[index] = line[i];
                    index++;
                }
            }
        }
        if(line[0] == '\n' || line[0] == '\0')
        {
            int tempCount = 0;
            for(int i = 0; i < 7; i++)
            {
                if(tag[i]){
                    printf("here\n");
                    tempCount++;}
            }
            if(tempCount == 7)
            {
                count++;
            }
            printf("%d\n",tempCount);
        }

        read = true;
    }

    printf("%d\n", count);

    fclose(fp);
    return 0;
}
