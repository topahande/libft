/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:42:22 by htopa             #+#    #+#             */
/*   Updated: 2024/04/23 13:42:24 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	const char	*found;
	const char	*find;
    size_t  i;

    i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	find = needle;
	while (*haystack != '\0' && i < len)
	{
		if (*haystack != *find && i < len)
		{
			haystack++;
            i++;
			continue ;
		}
		found = haystack;
		while (i < len)
		{
			if (*find == '\0')
				return ((char *)haystack);
			if (*found++ != *find++)
				break ;
		}
		find = needle;
		haystack++;
        i++;
	}
	return (0);
}
