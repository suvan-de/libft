/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 14:38:28 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 17:20:31 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	size_t	i;
	char	a;
	char	*temp;

	i = 0;
	a = (unsigned char)c;
	temp = (char *)str;
	while (i < n)
	{
		if (temp[i] == a)
			return (temp + i);
		i++;
	}
	return (NULL);
}
