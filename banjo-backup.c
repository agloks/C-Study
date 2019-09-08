#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* are_you_playing_banjo(const char* name)
{
   char* c = (char *)calloc(strlen(name),sizeof(char));
   strcpy(c,name);
   if (c[0] == 'r' || c[0] == 'R')
	{
     strcat(c," plays banjo");
	}
   else
	{
     strcat(c," does not play banjo");
	}
   return c;
}

int main()
{
	const char martin[] = "Martin";
	printf("%s\n",are_you_playing_banjo(martin));
	return 0;
}