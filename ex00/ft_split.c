/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 08:08:55 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 14:24:01 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	contains(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
		if (str[i++] == c)
			return (1);
	return (0);
}

int	strs_size(char *str, char *charset)
{
	int	i;
	int	size;

	i = -1;
	size = 1;
	while (str[++i])
		if (!contains(charset, str[i])
			&& (!str[i + 1] || contains(charset, str[i + 1])))
			size++;
	return (size);
}

char	*segment_str(char *str, int start, int end)
{
	char	*segment;
	int		i;

	segment = malloc(sizeof(char) * (end - start + 2));
	i = -1;
	while (start + ++i <= end)
		segment[i] = str[start + i];
	segment[i] = 0;
	return (segment);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		start;
	int		end;
	int		i;

	strs = malloc(sizeof(char *) * strs_size(str, charset));
	start = 0;
	end = -1;
	i = 0;
	while (str[++end])
	{
		if (contains(charset, str[end]))
			start = end + 1;
		else if (!str[end + 1] || contains(charset, str[end + 1]))
			strs[i++] = segment_str(str, start, end);
	}
	strs[i] = 0;
	return (strs);
}
