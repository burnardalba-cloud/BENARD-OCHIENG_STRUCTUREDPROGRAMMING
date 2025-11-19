#include <stdio.h>
#include <string.h>

int main()
{
   char name[100];
   int length;
   printf("Please enter your name: ");
   scanf("%s", name);

   printf("You entered: %s\n", name);

   length = strlen(name);
   printf("The length of your name is: %d\n", length);

    return 0;
}
