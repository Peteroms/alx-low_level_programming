#include <stdio.h>
/**
* main - causes an infinite loop
* Return: 0
*/
int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

/**infinite loop start*/
i = 0;

while (i < 10)
{
putchar(i);
}

/**infinite loop avoided*/
printf("Infinite loop avoided! \\o/\n");

return (0);
}
