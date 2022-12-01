/** @file main.c
* 
* @brief A description of the module's purpose. *****CHANGE ME*****
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../include/1.h"

int main()
{
	FILE * fp = fopen("elves.txt", "r");
    if (!fp)
    {
        fprintf(stderr, "Error opening file %s: \n", "elves.txt");
        perror("");
        return 1;
    }
    else
    {
	    calculate_calories(fp);

    }

}
