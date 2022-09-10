#include <stdio.h>
/**
 *main -is the entry point for the program.
 *
 *Return:zero if no error, Non-zero value  if errors.
 */
int main(void)
{
printf("Size of a char: %ld byte(s)
", sizeof(char));
printf("Size of an int: %ld byte(s)
", sizeof(int));
printf("Size of a long int: %ld byte(s)
", sizeof(long int));
printf("Size of a long long int: %ld byte(s)
", sizeof(long long int));
printf("Size of a float: %ld byte(s)
", sizeof(float));
return (0);
}
