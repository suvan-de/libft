/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/26 15:18:15 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/26 16:56:37 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strrchr(const char *str, int c)
{
	int len;
	int i;

	i = 0;
	len = ft_strlen(str);
	while (*str != '\0')
		str += 1;
	while (i < len)
	{
		if (*str-- == (unsigned char)c)
			return (str + 1);
		i++;
	}
	return (NULL);
}
