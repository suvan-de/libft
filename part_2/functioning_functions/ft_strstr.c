#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
  int j;
  int len;

  j = 0;
  len = ft_strlen(needle);
  while (*haystack != '\0')
    {
      if (*haystack++ == needle[j])
	{
	  j++;
	  if (needle[j] == '\0')
	    return (haystack - len);
	}
    }
  return (NULL);
}
