/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striter.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:29:30 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:29:41 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char *))
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
    {
		f(s[i]);
		i++;
    }
}
