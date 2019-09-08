#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* are_you_playing_banjo(const char* name)
{
   int indexvalue = strlen(name);
   char c[indexvalue];
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
	char martir[7] = "martir";
	printf("%s\n",are_you_playing_banjo(martir));
	return 0;
}