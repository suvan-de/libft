#include "libft.h"

char *ft_strchr(const char *str, int c)
{
  while (*str != '\0')
    {
      if (*str++ == (unsigned char)c)
	return (str - 1);
    }
  return (NULL);
}
