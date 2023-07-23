/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 16:02:54 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dict	parse_element(char *line)
{
	t_dict	element;
	char	**segments;

	segments = ft_split(line, ": ");
	if (!segments)
	{
		element.value = -1;
		free_2d(segments);
		return (element);
	}
	element.value = ft_atoi(segments[0]);
	element.str = segments[1];
	free_2d(segments);
	return (element);
}

t_dict	*parse_dict(char *filename, int *size)
{
	char	**lines;
	t_dict	*dict;

	lines = read_lines(filename);
	if (!lines)
		return (NULL);
	*size = 0;
	while (lines[*size])
		(*size)++;
	dict = malloc(sizeof(t_dict) * *size);
	if (!dict)
		return (free_2d(lines));
	*size = -1;
	while (lines[++(*size)])
	{
		dict[*size] = parse_element(lines[*size]);
		if (dict[*size].value < 0)
		{
			free(dict);
			return (free_2d(lines));
		}
	}
	free_2d(lines);
	return (dict);
}
