/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 14:32:01 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/17 15:54:03 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main()
{
	char    *str;
	char	*str1;
	char	*dst;
	void	*arr;
	int 	i;

//strlen
	printf("strlen: %zu\n", ft_strlen("hello"));
//atoi
    printf("atoi: %d\n", ft_atoi("-1233498"));
//itoa
	printf("itoa: %s\n", ft_itoa(-1234));
//putendl
    ft_putendl("putendl");
//strtrim
	printf("%s\n", ft_strtrim("  	 \nstrtrim\n	   "));
//memalloc
	str = ft_memalloc(4);
	printf("address of allocated memory: %p\n", &str);
//memdel
	arr = malloc(10);
	printf("address of arr:       %p\n", arr);
	ft_memdel(&arr);
	printf("address after memdel: %p\n", arr);
//memset
	str1 = (char *)malloc(6);
	i = 0;
	while (i < 5)
	{
		str1[i] = 'p';
		i++;;
	}
	str1[i] = '\0';
	printf("string before memset: %s\n", str1);
	printf("string after memset: %s\n", ft_memset(str1, 'a', 3));
//putnbr
	ft_putnbr(-13);
	ft_putchar('\n');
//putchar
	ft_putchar('!');
	ft_putchar('\n');
//putstr
	ft_putstr("putstr\n");
//bzero
	ft_bzero(str1, 1);
	printf("string after bzero: %s\n", str1 + 1);
//memcpy
	printf("pointer to dest: %p\n", ft_memcpy(dst, str1 + 1, 3));
	printf("contents of dest after memcpy: %s\n", ft_memcpy(dst, str1 + 1, 3));
//strclr
	printf("string before strclr: %s\n", str1);
	ft_strclr(str1);
	printf("string after strclr: %s\n", str1);
//strcmp
	printf("comparing hello and hello: %d\n", ft_strcmp("hello", "hello"));
//strdel
	ft_strdel(&str1);
	printf("pointer to str1 after string delete: %p\n", str1);
//strequ
	printf("check if hello and hellp are equal: %d\n", ft_strequ("hello", "hellp"));
//striter
	ft_striter("123", &ft_putstr);
	ft_putchar('\n');
//striteri
//strjoin
	printf("joined string of seperate hello and world: %s\n", ft_strjoin("hello", "world"));
//strnequ
	printf("check if the first two char of hello and heppo are equal: %d\n", ft_strnequ("hello", "heppo", 2));
//strnew
	printf("show pointer to new and empty string: %p\n", ft_strnew(5));
	return (0);
}
