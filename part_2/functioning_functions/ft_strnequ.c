/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnequ.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/10 10:59:21 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/10 11:02:30 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;

	i = 0;
	while ((s1[i] && s2[i]) != '\0' && i <= n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
