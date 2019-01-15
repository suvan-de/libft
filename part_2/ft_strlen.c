/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 17:45:06 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 18:09:23 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen(char const *str)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}
