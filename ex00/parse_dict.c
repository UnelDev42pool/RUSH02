/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 15:08:20 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_dict	parse_line(char *line)
{
	t_dict	element;
	char	**segments;

	segments = ft_split(line, ": ");
	if (!segments)
	{
		element.value = -1;
		return (element);
	}
	element.value = ft_atoi(segments[0]);
	element.str = segments[1];
	return (element);
}

t_dict	*parse_dict(char *filename, int *size)
{
	char	*file_content;
	char	**lines;
	t_dict	*dict;

	file_content = read_file(filename);
	if (!file_content)
		return (NULL);
	lines = ft_split(file_content, "\n");
	*size = 0;
	while (lines[*size])
		(*size)++;
	dict = malloc(sizeof(t_dict) * *size);
	*size = -1;
	while (lines[++(*size)])
		dict[*size] = parse_line(lines[*size]);
	return (dict);
}
