/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 16:51:30 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 17:42:21 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_array(char const *s, char c)
{
	int i;
	int num;
	char **arr;

	i = 0;
	num = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i] != '\0')
			num++;
		i++;
	}
	arr	= (char	**)malloc(num + 1);
    if (arr == NULL)
    	return (NULL);
	arr[num] = "\0";
	return (arr);
}

static	void	ft_length(char const *s, int i, char c, char *str)
{
	int num;

	num = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c)
	{
		num++;
		i++;
	}
	str = (char *)malloc(num + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

static	char	*ft_string(int num, char **arr)
{
	
char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	*str;
	char	**arr;

	i = 0;
	arr = ft_array(s, c);
	while (*arr != '\0')
	{
		if (s[i]
	return (arr);
}
