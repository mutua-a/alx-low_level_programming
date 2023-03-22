#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: the character to print
 * Return: On successs 1.
 * On error, -1 is returned & errno is set correctly
 */

int _putchar(char c)

{

  return (write(1, &c, 1));

}
