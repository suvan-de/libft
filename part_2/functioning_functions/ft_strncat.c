/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/18 14:44:59 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/18 14:50:24 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
    int len;
    int i;

    i = 0;
    len = ft_strlen(s1);
    while (i < n)
    {
        s1[len + i] = s2[i];
        i++;
    }
    s1[len + i] = '\0';
    return (s1);	
}
