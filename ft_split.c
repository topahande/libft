/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htopa <htopa@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 11:15:38 by htopa             #+#    #+#             */
/*   Updated: 2024/05/06 12:52:47 by htopa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	does_exist(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	get_word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		if (s[i] == c && s[i] != '\0')
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	int		i;
	int		j;
	int		index;
	char	**arr;

	if (s == NULL)
		return (NULL);
	if (does_exist(s, c) == 0)
		return ((char **)s);
	count = get_word_count(s, c);
	arr = (char **)(malloc((count + 1) * sizeof(char *)));
	if (arr == NULL)
		return (NULL);
	if (count == 0)
		arr[count] = (void *)0;
	i = 0;
	index = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i] != '\0')
		{
			while (s[i] == c && s[i] != '\0')
				i++;
		}
		if (s[i] != c && s[i] != '\0')
		{
			index = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			arr[j] = ft_substr(s, index, i - index);
			j++;
		}
		arr[j] = (void *)0;
	}
	return (arr);
}
