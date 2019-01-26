/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 13:41:18 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 17:14:00 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, void const *src, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	char			*temp_s;
	char			*temp_d;

	i = 0;
	temp_s = (char *)src;
	temp_d = (char *)dest;
	a = (unsigned char)c;
	if (n <= 0)
		return (dest);
	while (i < (n - 1) && *temp_s != a)
	{
		*temp_d++ = *temp_s++;
		i++;
	}
	*temp_d = *temp_s;
	return (temp_d - i);
}
