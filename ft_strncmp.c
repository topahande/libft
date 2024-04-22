/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:52:54 by htopa             #+#    #+#             */
/*   Updated: 2024/02/23 10:41:04 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		if (*s1 != *s2)
		{
			break ;
		}
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	else
		return (*s1 - *s2);
}
