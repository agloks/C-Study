#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char findMissingLetter(char array[], int arrayLength)
{
    char currentDirection[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'x', 'w', 'y', 'z'};
    int index = 0, skip = 0, match = 0;
    for(int x = 0; x < 27; x++)
    {
        if(array[0] == currentDirection[x] || array[0] == toupper(currentDirection[x]))
        {
            index = x;
        }
    }
    for(int k = index; k < index+arrayLength; k++)
    {
        for(int x = 0+skip; x < arrayLength; x++)
        {
            if(currentDirection[k] == array[x] || toupper(currentDirection[k]) == array[x])
            {
                match = 1;
            }            
        }
        if(match == 0) { return (array[0] == toupper(array[0])) ? toupper(currentDirection[k]) : currentDirection[k]; }
        match = 0;
        ++skip;
    }
  return ' ';
}

int main()
{
    char arr1[] = { 'v','x' };
    printf("%c\n", findMissingLetter(arr1, 2));
    return 0;
}