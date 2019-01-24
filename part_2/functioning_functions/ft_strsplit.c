#include "libft.h"

char **ft_words(char const *str, char c)
{
  char **arr;
  int count;
  int i;

  count = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == c)
	{
	  if (str[i - 1] != c)
	    count++;
	}
      i++;
    }
  if (str[i - 1] != c)
    count++;
  if (str[0] == c)
    count--;
  printf("words: %d\n", count);
  arr = (char **)malloc(sizeof(char *) * (count + 1));
  return (arr);
}

static char **ft_crtarr(char c, const char *str)
{
	int i;
	int j;
	int len;
	char **arr;
  
	i = 0;
	j = 0;
	len = 0;
	arr = ft_words(str, c);
	while (str[i] != '\0')
    {
		while (str[i] == c && str[i] != '\0')
			i++;
		while (str[i] != c && str[i] != '\0')
		{
			len++;
			i++;
		}
		arr[j] = (char *)malloc(len + 1);
		j++;
		len = 0;
    }
	return (arr);
}

char	**ft_strsplit(char const *s, char c)
{
	char **arr;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	arr = ft_crtarr(c, s);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			arr[j][k] = s[i];
			k++;
			i++;
		}
		arr[j][k] = '\0';
		k = 0;
		printf("string %d in arr: %s\n", j, arr[j]);
		j++;
	}
	arr[j] = (char *)malloc(1);
	arr[j][0] = '\0';
	return (arr);
}
