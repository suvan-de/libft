/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/11 17:48:53 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/11 17:50:17 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else
			return (-1 * (s2[i] - s1[i]));
	}
	if (s2[i] == '\0')
		return (0);
	else
		return (-s2[i]);
}
