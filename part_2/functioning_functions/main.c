/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: suvan-de <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/15 14:32:01 by suvan-de      #+#    #+#                 */
/*   Updated: 2019/01/24 15:36:36 by suvan-de      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int     main()
{
	char    *str;
	char	*str1;
	char	*str2 = "hello";
	char	*str3;
	char	*str4;
	char	*str5;
	char	*dst;
	char 	*dst2;
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
//strtrim [5]
	printf("trimmed string: %s\n", ft_strtrim("  	 \nstrtrim\n	   "));
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
		i++;
	}
	str1[i] = '\0';
	printf("string before memset: %s, and address: %p\n", str1, str1);
	printf("string after memset: %s, and ddress: %p\n", ft_memset(str1, 'a', 3), ft_memset(str1, 'a', 3));
//putnbr
	ft_putnbr(-13);
	ft_putchar('\n');
//putchar  [10]
	ft_putchar('!');
	ft_putchar('\n');
//putstr
	ft_putstr("putstr\n");
//bzero
	ft_bzero(str1, 1);
	printf("string after bzero: %s\n", str1 + 1);
//memcpy
	char dest2[40] = "";
	char src2[40] = "hello";
	printf("pointer to dest: %p\n", dest2);
	printf("contents of dest after memcpy: %s and its address: %p\n", ft_memcpy(dst, src2, 3), ft_memcpy(dst, src2, 3));
//strclr
	i = 0;
	str5 = (char *)malloc(5);
	while (i < 5)
    {
        str5[i] = 'c';
        i++;
    }
    str5[i] = '\0';
	printf("string before strclr: %s\n", str5);
	ft_strclr(str5);
	printf("string after strclr: %s\n", str5);
//strcmp  [15]
	printf("comparing -hello- and -hello-: %d\n", ft_strcmp("hello", "hello"));
//strdel
	ft_strdel(&str1);
	printf("pointer to str1 after string delete: %p\n", str1);
//strequ
	printf("check if -hello- and -hellp- are equal: %d\n", ft_strequ("hello", "hellp"));
//striter
	ft_striter("123", &ft_putstr);
	ft_putchar('\n');
//striteri
//strjoin
	printf("joined string of seperate -hello- and -world-: %s\n", ft_strjoin("hello", "world"));
//strnequ  [20]
	printf("check if the first two char of -hello- and -heppo- are equal: %d\n", ft_strnequ("hello", "heppo", 2));
 //strnew
	printf("show pointer to new and empty string: %p\n", ft_strnew(5));
//strdup
	printf("duplicate of the string -hello-: %s\n", ft_strdup(str2));
//strcpy
	printf("copy of string -hello- at dst: %s\n", ft_strcpy(dst, str2));
//strncpy
	printf("copy of the first 2 chars of string -hello- at dst: %s\n", ft_strncpy(dst2, str2, 2));
//strcat [25]
	i = 0;
	str3 = (char *)malloc(11);
	while (i < 5)
    {
        str3[i] = 'p';
        i++;;
    }
	i = 0;
	str4 = (char *)malloc(6);
	while (i < 5)
    {
        str4[i] = 'a';
        i++;;
    }
	str4[i] = '\0';
	printf("strcat: %s\n", ft_strcat(str3, str4));
//strncat
	ft_strclr(str3);
	i = 0;
	while (i < 5)
    {
        str3[i] = 'd';
        i++;
    }
	ft_strncat(str3, str4, 3);
	printf("strncat first 3 chars: %s\n", str3);
//strcmp
    printf("strcmp for -hella- and -hello-: %d\n", ft_strcmp("hella", "hello"));
//strncmp
    printf("strncmp for the first 3 chars of -hello- and -hella-: %d\n", ft_strncmp("hello", "hella", 3));
//strchr
    printf("string after first 'l'in -hello-: %s\n", ft_strchr("hello", 'l'));
//strrchr
    printf("string after last -.- in -www.hello.com-: %s\n", ft_strrchr("www.hello.com", '.'));
//strstr
    const char str7[18] = "helloworld";
    const char str8[5] = "lo";
    printf("substring -lo- in -helloworld-: %s\n", ft_strstr(str7, str8));
//strnstr
    printf("substring -lo- in the first 5 chars of -helloworld-: %s\n", ft_strnstr(str7, str8, 5));
//isalpha
    printf("is 'd' alphabetic: %d, is '.' alphabetic: %d\n", ft_isalpha('d'), ft_isalpha('.'));
//isdigit
    printf("is 'd' a digit: %d, is 2 a digit: %d\n", ft_isdigit('d'), ft_isdigit(2));
//isalnum
    printf("is 'd' alphanumeric: %d, is ','alphanumeric: %d, is 2 alphanumeric: %d\n", ft_isalnum('d'), ft_isalnum(','), ft_isalnum(2));
//isascii
    printf("is 128 an ascii char: %d, is '_'an ascii char: %d\n", ft_isascii(128), ft_isascii('_'));
//isprint
    printf("is 31 printable: %d, is 'a' printable: %d\n", ft_isprint(31), ft_isprint('a'));
//toupper
    printf("uppercase of 'k' is: %c, uppercase of 'D' is: %c, uppercase of '2' is: %c\n", ft_toupper('k'), ft_toupper('D'), ft_toupper('2'));
//tolower
    printf("lowercase of 'K' is: %c, lowercase of 'd' is: %c, lowercase of '2' is: %c\n", ft_tolower('K'), ft_tolower('d'), ft_tolower('2'));
//strsplit
    char str9[80] = ".hello...wor.ld..today..gwef.chjebi..iqubwfi..";
    char **arr2;
    arr = ft_strsplit(str9, '.');
//strsub
	char str10[40] = "helloworld";
	printf("substring of helloworld: %s\n", ft_strsub(str10, 3, 4));
//putchar_fd
	ft_putchar_fd('a', 1);
//putstr_fd
	ft_putstr_fd("hello", 1);
//putnbr_fd
	ft_putnbr_fd(-123, 1);
//putendl_fd
    ft_putendl_fd("hello", 1);
//strlcat
    printf("strlcat: %zu\n", ft_strlcat(str3, str4, sizeof(str3)));
	return (0);
}
