/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:20:19 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 11:27:18 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		length1;
	int		length2;
	int		i;
	char	*str;

	i = 0;
	length1 = ft_strlen(s1);
	length2 = ft_strlen(s2);
	str = (char *)malloc(length1 + length2 - 1);
	while (i < length1)
	{
		str[i] = s1[i];
		i++;
	}
	while (i < (length1 + length2 - 1))
	{
		str[i] = s2[i - length1];
		i++;
	}
	str[i] = '\0';
	return (str);
}
