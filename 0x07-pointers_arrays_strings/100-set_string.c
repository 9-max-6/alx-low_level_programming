#include "main.h"

/**
 * set_string - Updates the value of a pointer to point to a different string.
 * @s: Pointer to a pointer to be updated.
 * @to: The string to be pointed to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
