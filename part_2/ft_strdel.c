/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdel.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:29:08 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:29:18 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_strdel(char **as)
{
	int i;

	i = 0;
	while (as[i])
    {
		free(as[i]);
		i++;
    }
	as = NULL:
}
