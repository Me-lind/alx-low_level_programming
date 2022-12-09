#include <stdio.h>
 int main(void)
{
printf("Size of a char: %lu bytes(s)\n", (unsigned long int) sizeof(char));
printf("Size of an int: %lu bytes(s)\n", (unsigned long int) sizeof(int));
 printf("Size of a long int: %lu byte(s)\n", (int) sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n",(int) sizeof(long long int));
printf("Size of a float: %lu byte(s)\n",(unsigned long int) sizeof(float));
return(0);
}
