/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:06:16 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 17:22:28 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strchr(const char *str, int c)
{
	while (*str != '\0')
	{
		if (*str++ == (unsigned char)c)
			return (str - 1);
	}
	return (NULL);
}
