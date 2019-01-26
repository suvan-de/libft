/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 16:20:00 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 16:39:31 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, char const *restrict src, size_t size)
{
	int len_d;
	int len_s;
	int n;
	int i;

	i = 0;
	len_s = ft_strlen(src);
	len_d = ft_strlen(dst);
	n = size - ft_strlen(dst);
	if (n < 1)
		return (size + len_s);
	while (i < (n - 1))
	{
		dst[i + len_d] = src[i];
		i++;
	}
	dst[i + len_d] = '\0';
	return (len_d + len_s);
}
