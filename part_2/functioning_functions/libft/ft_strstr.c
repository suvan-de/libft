/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:20:15 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 16:57:09 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strstr(const char *haystack, const char *needle)
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
		else
		{
			haystack -= (j - 1);
			j = 0;
		}
	}
	return (NULL);
}
