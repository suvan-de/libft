/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 17:50:36 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/17 12:47:47 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char const *str)
{
	int i;
	int k;
	int num;

//	printf("strlen werkt niet als dit niet eerst geprint wordt: %zu\n", ft_strlen(str));
	i = ft_strlen(str) - 1;
	k = 1;
	num = 0;
	while (i >= 0)
	{
		if (str[i] == '-')
			num = num * -1;
		else if (str[i] == '+')
			num = num * 1;
		else
		{
			num = num + k * (str[i] - 48);
			k = k * 10;
		}
		i--;
	}
	return (num);
}

