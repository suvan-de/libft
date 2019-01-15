/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 11:28:39 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 16:58:14 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_length(char const *s)
{
	int i;
	int length;

	i = 0;
	length = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	while (s[i] != '\0')
	{
		i++;
		length++;
	}
	i--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i--;
		length--;
	}
	return (length);
}

char	*ft_strtrim(char const *s)
{
	int		i;
	int		k;
	int		length;
	char	*str;

	i = 0;
	k = 0;
	length = ft_length(s);
	str = (char *)malloc(length + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	length = length + i;
	while (i < length)
	{
		str[k] = s[i];
		i++;
		k++;
	}
	str[k] = '\0';
	return (str);
}
