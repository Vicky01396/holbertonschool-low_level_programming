#include "search_algos.h"

/**
 * linear_search - finds a value in an array by linear search
* @array: array
* @size: size of the array
* @value: value to search
* Return: value, and position of the value on success, -1 on failure
*/

int linear_search(int *array, size_t size, int value)
{
    unsigned int count = 0;
    
    if (array)
    {
        while (count <= (size - 1))
        {
            printf("Value checked array[%d] = [%d]\n", count, array[count]);
            if (array[count] == value)
            {
                return (count);
            }
            count++;
        }
    }
    return (-1);
}
