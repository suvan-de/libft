/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 14:02:36 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 16:46:38 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, void const *src, size_t len)
{
	size_t	i;
	char	*temp_s;
	char	*temp_d;
	char	*temp;

	i = 0;
	temp = (char *)malloc(len + 1);
	temp_s = (char *)src;
	temp_d = (char *)dst;
	while (i < len)
	{
		temp[i] = temp_s[i];
		i++;
	}
	temp[len] = '\0';
	i = 0;
	while (i < len)
	{
		temp_d[i] = temp[i];
		i++;
	}
	return (temp_d);
}
