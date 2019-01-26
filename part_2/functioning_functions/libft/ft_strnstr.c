/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:19:11 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 16:55:58 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		l;

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
		big -= (j - 1);
		j = 0;
		i++;
	}
	return (NULL);
}
