/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:39:36 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 10:45:01 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *str;

	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (char *)malloc(1);
		str[i] = f(s[i]);
		i++;
	}
	str[i] = (char *)malloc(1);
	str[i] = '\0';
	return (str);
}
