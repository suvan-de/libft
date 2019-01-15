/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:49:23 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 15:48:56 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_length(int n)
{
	int i;

	if (n < 0)
	{
		i++;
		n = n * -1;
	}
	while (n > 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		length;

	length = ft_length(n);
	str = (char *)malloc(length + 1);
	if (n < 0)
	{
		str[i] = '-';
		n = n * -1;
		i++;
	}
	while (n > 0)
	{
		str[i] = (n % 10) + 48;
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return (str);
}
