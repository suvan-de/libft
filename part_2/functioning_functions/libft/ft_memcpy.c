/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 12:32:30 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 17:21:45 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	i;
	char	*temp_s;
	char	*temp_d;

	i = 0;
	temp_s = (char *)src;
	temp_d = (char *)dst;
	while (i < n)
	{
		*temp_d++ = *temp_s++;
		i++;
	}
	return (temp_d - n);
}
