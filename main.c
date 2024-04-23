/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 11:39:49 by htopa             #+#    #+#             */
/*   Updated: 2024/04/23 11:36:41 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"

int	main(void)
{
	char	x[6];
	char	y[6];

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
	return (0);
}
