/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:22:11 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 15:36:44 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_words(char const *str, char c)
{
	char	**arr;
	int		count;
	int		i;

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
	arr = (char **)malloc(sizeof(char *) * (count + 1));
	return (arr);
}

static char	**ft_crtarr(char c, const char *str)
{
	int		i;
	int		j;
	int		len;
	char	**arr;

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

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;
	int		k;

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
		j++;
	}
	arr[j] = 0;
	return (arr);
}
