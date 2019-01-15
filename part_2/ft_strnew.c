/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 18:03:52 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:51:52 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnew(size_t size)
{
	char *str;
	int i;

	i = 0;
	if (!str = (char *str)malloc(size + 1)
		return (NULL);
		str = (char *)malloc(size + 1);
		while (i < size)
		{
			str[i] = '\0';
			i++;
		}
		str[i] = '\0';
		return (str);
		}
}
