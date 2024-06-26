/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:39:49 by htopa             #+#    #+#             */
/*   Updated: 2024/04/24 12:12:20 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <fcntl.h>
#include "libft.h"

int	main(void)
{
	char	x[6];
	char	y[6];
	char	a[10] = "hello";
	char	b[10] = "hey";
	char	c[10] = "hello";
	char	d[10] = "hey";
	char	e[10] = "hello";
	char	f[10] = "hey";
	char	g[10] = "hello";
	char	h[10] = "hey";

	printf("Testing ft_isalpha.c:\n");
	printf("%d\n", ft_isalpha('h'));
	printf("%d\n", ft_isalpha('3'));
	printf("%d\n", isalpha('h'));
	printf("%d\n", isalpha('3'));
	printf("Testing ft_isprint.c:\n");
	printf("%d\n", ft_isprint('h'));
	printf("%d\n", ft_isprint('3'));
	printf("%d\n", isprint('h'));
	printf("%d\n", isprint('3'));
	printf("Testing ft_tolower.c:\n");
	printf("%d\n", ft_tolower('H'));
	printf("%d\n", ft_tolower('3'));
	printf("%d\n", tolower('H'));
	printf("%d\n", tolower('3'));
	printf("Testing ft_toupper.c:\n");
	printf("%d\n", ft_toupper('h'));
	printf("%d\n", ft_toupper('3'));
	printf("%d\n", toupper('h'));
	printf("%d\n", toupper('3'));
	printf("Testing ft_isdigit.c:\n");
	printf("%d\n", ft_isdigit('h'));
	printf("%d\n", ft_isdigit('3'));
	printf("%d\n", isdigit('h'));
	printf("%d\n", isdigit('3'));
	printf("Testing ft_isalnum.c:\n");
	printf("%d\n", ft_isalnum('h'));
	printf("%d\n", ft_isalnum('3'));
	printf("%d\n", ft_isalnum('!'));
	printf("%d\n", isalnum('h'));
	printf("%d\n", isalnum('3'));
	printf("%d\n", isalnum('!'));
	printf("Testing ft_isascii.c:\n");
	printf("%d\n", ft_isascii('h'));
	printf("%d\n", ft_isascii('3'));
	printf("%d\n", ft_isascii(3));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", isascii('h'));
	printf("%d\n", isascii('3'));
	printf("%d\n", isascii(3));
	printf("%d\n", isascii(128));
	printf("Testing ft_strlen.c:\n");
	printf("%lu\n", ft_strlen("hello"));
	printf("%lu\n", ft_strlen("3tew"));
	printf("%lu\n", strlen("hello"));
	printf("%lu\n", strlen("3tew"));
	printf("Testing ft_strchr.c:\n");
	printf("%s\n", ft_strchr("hello", 'e'));
	printf("%s\n", ft_strchr("hello", '\0'));
	printf("%s\n", ft_strchr("hello", 'a'));
	printf("%s\n", strchr("hello", 'e'));
	printf("%s\n", strchr("hello", '\0'));
	printf("%s\n", strchr("hello", 'a'));
	printf("Testing ft_strrchr.c:\n");
	printf("%s\n", ft_strrchr("helelo", 'e'));
	printf("%s\n", ft_strrchr("helelo", '\0'));
	printf("%s\n", ft_strrchr("helelo", 'a'));
	printf("%s\n", strrchr("helelo", 'e'));
	printf("%s\n", strrchr("helelo", '\0'));
	printf("%s\n", strrchr("helelo", 'a'));
	printf("Testing ft_strncmp.c:\n");
	printf("%d\n", ft_strncmp("hello", "hel", 4));
	printf("%d\n", ft_strncmp("hello", "happy", 4));
	printf("%d\n", ft_strncmp("hello", "hel", 3));
	printf("%d\n", strncmp("hello", "hel", 4));
	printf("%d\n", strncmp("hello", "happy", 4));
	printf("%d\n", strncmp("hello", "hel", 3));
	printf("Testing ft_bzero.c:\n");
	ft_bzero(x, sizeof(x));
	printf("%s\n", x);
	ft_bzero(x, 0);
	printf("%s\n", x);
	bzero(y, sizeof(y));
	printf("%s\n", y);
	ft_bzero(y, 0);
	printf("%s\n", y);
	printf("Testing ft_memset.c:\n");
	ft_memset(x, 'a', 5);
	printf("%s\n", x);
	ft_memset(y, 104, 5);
	printf("%s\n", y);
	memset(x, 'a', 5);
	printf("%s\n", x);
	memset(y, 104, 5);
	printf("%s\n", y);
	printf("Testing ft_memchr.c:\n");
	printf("%s\n", ft_memchr("hello", 'e', 5));
	printf("%s\n", ft_memchr("hello", '\0', 5));
	printf("%s\n", ft_memchr("hello", 'a', 5));
	printf("%s\n", memchr("hello", 'e', 5));
	printf("%s\n", memchr("hello", '\0', 5));
	printf("%s\n", memchr("hello", 'a', 5));
	printf("Testing ft_strdup.c:\n");
	printf("%s\n", ft_strdup("hello"));
	printf("%s\n", strdup("hello"));
	printf("Testing ft_atoi.c:\n");
	printf("%d\n", ft_atoi("  -+--12gb34"));
	printf("%d\n", atoi("  -+--12gb34"));
	printf("%d\n", ft_atoi("  +2147483647"));
	printf("%d\n", atoi("  +2147483647"));
	printf("%d\n", ft_atoi("  -2147483648"));
	printf("%d\n", atoi("  -2147483648"));
	printf("%d\n", ft_atoi("  +2147483648"));
	printf("%d\n", atoi("  +2147483648"));
	printf("Testing ft_strlcpy.c:\n");
	printf("%zu\n", ft_strlcpy(a, b, 4));
	printf("%s\n", a);
	printf("%s\n", b);
	printf("%zu\n", strlcpy(c, d, 4));
	printf("%s\n", c);
	printf("%s\n", d);
	printf("Testing ft_strlcat.c:\n");
	printf("%zu\n", ft_strlcat(e, f, 8));
	printf("%s\n", e);
	printf("%s\n", f);
	printf("%zu\n", strlcat(g, h, 8));
	printf("%s\n", g);
	printf("%s\n", h);
	printf("Testing ft_strnstr.c:\n");
	printf("%s\n", ft_strnstr("Hello", "el", 2));
	printf("%s\n", strnstr("Hello", "el", 2));
	printf("%s\n", ft_strnstr("Hello", "el", 3));
	printf("%s\n", strnstr("Hello", "el", 3));
	printf("%s\n", ft_strnstr("Hello", "el", 4));
	printf("%s\n", strnstr("Hello", "el", 4));
	printf("%s\n", ft_strnstr("Hello", "\0", 2));
	printf("%s\n", strnstr("Hello", "\0", 2));
	printf("%s\n", ft_strnstr("Hello", "", 2));
	printf("%s\n", strnstr("Hello", "", 2));
	printf("\n\n\n");
	printf("Testing ft_memcpy.c:\n");
	char stra[] = "Heallo\0";
	char strb[] = "Heallo\0";
	printf("%s\n", ft_memcpy(stra + 1, stra + 2, 4));
	printf("%s\n", memcpy(strb + 1, strb + 2, 4));
	printf("%s\n", stra);
	printf("%s\n", strb);
	printf("Testing ft_memmove.c:\n");
	char strx[] = "Heallo\0";
	char stry[] = "Heallo\0";
	printf("%s\n", ft_memmove(strx + 1, strx + 2, 4));
	printf("%s\n", memmove(stry + 1, stry + 2, 4));
	printf("%s\n", strx);
	printf("%s\n", stry);
	char p[] = "123456781234567\0";
	printf("%s\n", ft_memmove(p + 2, p, 14));
	char pp[] = "123456781234567\0";
	printf("%s\n", memmove(pp + 2, pp, 14));
	printf("Testing ft_memcmp.c:\n");
	char strxx[] = "Heallo\0";
	char stryy[] = "Heello\0";
	printf("%d\n", ft_memcmp(strxx, stryy, 4));
	printf("%d\n", memcmp(strxx, stryy, 4));
	printf("%d\n", ft_memcmp(strxx, stryy, 2));
	printf("%d\n", memcmp(strxx, stryy, 2));
	printf("Testing ft_calloc.c:\n");
	printf("%s\n", ft_calloc(5, 2));
	printf("%s\n", calloc(5, 2));
	printf("%s\n", ft_calloc(0, 2));
	printf("%s\n", calloc(0, 2));
	printf("Testing ft_substr.c:\n");
	char const A[] = "Hello Hande!\0";
	printf("%s\n", ft_substr(A, 6, 0));
	printf("%s\n", ft_substr(A, 13, 4));
	printf("%s\n", ft_substr(A, 6, 4));
	printf("%s\n", ft_substr(A, 6, 5));
	printf("%s\n", ft_substr(A, 6, 8));
	printf("Testing ft_strjoin.c:\n");
	char const B[] = "Hello \0";
	char const C[] = "Hande!\0";
	printf("%s\n", ft_strjoin(B, C));
	int fd;
	fd = open("/Users/htopa/Documents/Mygit/libft/foo.txt", O_CREAT | O_RDWR | O_APPEND);
	ft_putchar_fd('H', fd);
	close(fd);
	fd = open("/Users/htopa/Documents/Mygit/libft/foo.txt", O_CREAT | O_RDWR | O_APPEND);
	ft_putstr_fd("Hande", fd);
	close(fd);
	fd = open("/Users/htopa/Documents/Mygit/libft/foo.txt", O_CREAT | O_RDWR | O_APPEND);
	ft_putendl_fd("Hande", fd);
	close(fd);
	fd = open("/Users/htopa/Documents/Mygit/libft/foo.txt", O_CREAT | O_RDWR | O_APPEND);
	ft_putnbr_fd(-1965, fd);
	close(fd);
	return (0);
}
