#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
  int len;
  int i;

  i = 0;
  len = ft_strlen(str);
  while (*str != '\0')
    *str++;
  while (i < len)
    {
      if (*str-- == (unsigned char)c)
	return (str + 1);
      i++;
    }
  return (NULL);
}
