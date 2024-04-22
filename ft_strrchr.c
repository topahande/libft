/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:32:24 by htopa             #+#    #+#             */
/*   Updated: 2024/04/22 14:51:04 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	p;

	p = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			p = i;
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	if (p != 0)
		return ((char *)(s + p));
	else
		return (NULL);
}
