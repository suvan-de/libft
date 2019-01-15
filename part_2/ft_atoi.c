/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 17:50:36 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 18:32:20 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int i;
	int k;
	int len;
	int n;

	k = 1;
	len = ft_strlen(str);
	i = len - 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			n = n * -1;
		else if (str[i] == '+')
			n = n * 1;
		else
		{
			n = n + k * (str[i] - 48);
			k = k * 10;
		}
		i--;
	}
	return (n);
}
