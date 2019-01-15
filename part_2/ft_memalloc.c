/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memalloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/09 17:45:55 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/09 17:59:04 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (mem = (void *)malloc(size_t size))
		return (mem);
	else
		return (NULL);
}
