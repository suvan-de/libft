/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strclr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:28:11 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 15:09:47 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int i;
	int length;

	i = 0;
	length = ft_strlen(s);
	while (i < length)
	{
		s[i] = 0;
		i++;
	}
}
