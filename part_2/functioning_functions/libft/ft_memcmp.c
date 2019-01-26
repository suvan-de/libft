/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 14:44:45 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 17:21:22 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *str1, void const *str2, size_t n)
{
	size_t	i;
	char	*temp_1;
	char	*temp_2;

	i = 0;
	temp_1 = (char *)str1;
	temp_2 = (char *)str2;
	while (i < n)
	{
		if (temp_1[i] != temp_2[i])
			return (temp_1[i] - temp_2[i]);
		i++;
	}
	return (0);
}
