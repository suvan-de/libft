/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:45:27 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:48:55 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (char *)malloc(1);
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = (char *)malloc(1);
	str[i] = '\0';
	return (str);
}
