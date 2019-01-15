/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 18:36:03 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 19:16:00 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	int i;

	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}

int		main()
{
	printf("%s", ft_memset("hello", '-', 2));
	return (0);
}
