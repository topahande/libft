/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:06:29 by htopa             #+#    #+#             */
/*   Updated: 2024/04/22 14:15:59 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	char_c;

	char_c = (char)c;
	while (*s != '\0' && *s != char_c)
		s++;
	if (*s == char_c)
		return ((char *)s);
	else
		return (NULL);
}
