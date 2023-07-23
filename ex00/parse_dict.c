/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 12:10:52 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

int	file_len(char *filename)
{
	int		file;
	int		len;
	int		result;
	char	str[2];

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	len = 0;
	result = 1;
	while (result)
	{
		result = read(file, str, 1);
		len++;
	}
	result = close(file);
	if (result == -1)
		return (0);
	return (len);
}

char	*read_file(char *filename)
{
	int		len;
	int		file;
	char	*str;

	len = file_len(filename);
	str = malloc(sizeof(char) * len);
	file = open(filename, O_RDONLY);
	if (len == 0 || !str || file == -1)
		return (NULL);
	read(file, str, len);
	close(file);
	str[len - 1] = 0;
	return (str);
}

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

t_dict	*parse_dict(char *filename)
{
	char	*file_content;
	char	**lines;
	int		size;
	t_dict	*dict;

	file_content = read_file(filename);
	if (!file_content)
		return (NULL);
	lines = ft_split(file_content, "\n");
	size = 0;
	while (lines[size])
		size++;
	dict = malloc(sizeof(t_dict) * (size + 1));
	size = -1;
	while (lines[++size])
		dict[size] = parse_line(lines[size]);
	dict[size].str = NULL;
	return (dict);
}

// #include <stdio.h>
//
// int	main(void)
// {
	// int		i;
	// t_dict	*dict;

	// dict = parse_dict("numbers.dict");
	// i = 0;
	// while (dict[i].str)
	// {
		// printf("%lld: %s\n", dict[i].value, dict[i].str);
		// i++;
	// }
// }

