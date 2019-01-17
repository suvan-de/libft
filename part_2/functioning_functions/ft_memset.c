/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 18:36:03 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/17 12:24:00 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memset(void *b, int c, size_t len)
{
	char			*temp;
	unsigned char	chara;
	size_t 			i;

	i = 0;
	temp = (char *) b;
	chara = (unsigned char) c;
	while (i < len)
	{
		temp[i] = chara;
		i++;
	}
	return (temp);
}
