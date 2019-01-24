#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
  int i;
  int j;
  int l;

  j = 0;
  i = 0;
  l = ft_strlen(little);
  while (*big != '\0' && i < len)
    {
      if (*big++ == little[j])
	{
	  j++;
	  if (little[j] == '\0')
	    return (big - l);
	}
      i++;
    }
  return (NULL);
}
  
