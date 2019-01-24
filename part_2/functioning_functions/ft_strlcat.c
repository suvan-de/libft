/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 15:11:20 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/24 16:00:06 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	int len;
    int i;

    i = 0;
    len = ft_strlen(dest);
    while (i < size)
    {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return (strlcat(dest, src, size));
}
