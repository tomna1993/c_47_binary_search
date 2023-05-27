#include <cs50.h>
#include <stdio.h>
#include <math.h>

#define ARRAY_LENGTH 11

int main(void)
{
    // To use binary search we need an ordered list
    int sorted_array[ARRAY_LENGTH] = {0,1,2,3,4,5,6,7,8,9,10};

    // Get number from user
    int get_user_int = get_int("Number: ");

    int index_left = 0;
    int index_right = ARRAY_LENGTH - 1;
    
    while (index_left <= index_right)
    {
        int index_middle = ceil((index_left + index_right) / (float) 2);

         if (sorted_array[index_middle] == get_user_int)
        {
            printf ("Found on index %i!\n", index_middle);
            return 0;
        }

        if (sorted_array[index_middle] > get_user_int)
        {
            index_right = index_middle - 1;
        }
        else
        {
            index_left = index_middle + 1;
        }
    }   

    printf ("Not found!\n");
    return 1;
} 