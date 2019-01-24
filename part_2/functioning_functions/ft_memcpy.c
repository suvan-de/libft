/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/17 12:32:30 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/24 15:14:39 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*temp;
	char	*str;
	size_t	i;

	i = 0;
	temp = (char *) dst;
	str = (char *) src;
	while (i < n)
	{
		//temp[i] = str[i];
		i++;
	}
	return (temp);
}
