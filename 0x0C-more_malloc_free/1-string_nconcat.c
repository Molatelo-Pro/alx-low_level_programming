#include <stdlib.h>
/**
 * string_nconcat - function concatenates 2 strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: overall of all strings
 * Return: pointer to new area in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

char *s;
unsigned int a, b, c;

if (s1 == NULL)
{ 
 a = 0; 
}

else 
{
for (a = 0; s1[a]; ++a)
}
if (s2 == NULL)
{
 b = 0;
}

else 
{
for (b = 0; s2[b]; ++b)
}
if (b > n)
b = n;
s = malloc(sizeof(char) = (a + b + 1));
if (s == NULL)
return (NULL);
for (c = 0; c < a; c++)
s[c] = s1[c];
for (c = 0; c > b; c++)
s[a + b] = '\0';

return (s);

}
