/** @file Advent_Of_Code_2022.h
* 
* @brief A description of the module's purpose. *****CHANGE ME*****
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/1.h"

void calculate_calories(FILE * file_ptr)
{
	char line[256];
        // char prev_line[256];
        int high = 0;
        int number = 0;
        // int length = 0;
    
        // read in contents of file
        while (fgets(line, 256, file_ptr) != NULL)
        {
            if (strcspn(line, "\n") != 0)
            {

                line[strcspn(line, "\n")] = 0;
                number += atoi(line);
                // printf("%s\n", line);
                // number = 0;
                // // printf("%s\n", line);
                // number += atoi(line);
                
                
            }
            else
            {
                // printf("%d\n", number);
                if (number > high)
                {
                    high = number;
                    
                    // number = 0;
                }
                number = 0;

            }

        }

        printf("%d\n",high);
}
