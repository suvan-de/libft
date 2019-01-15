/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:29:53 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:30:04 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
    {
		f(i, s[i]);
		i++;
    }
}
