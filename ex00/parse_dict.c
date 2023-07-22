/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:16 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/22 20:44:19 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
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

}

t_dict	*parse_file(char *filename)
{
	int		size;
	char	**lines;
	t_dict	*dict;

	lines = read_file(filename);
	if (!lines)
		return (NULL);
	lines = ft_split(lines, "\n");
	size = 0;
	while (lines[size])
		size++;
	dict = malloc(sizeof(t_dict) * size);
	if (!dict)
		return (NULL);
	dict[size - 1].str = 0;

	return (dict);
}

// int	main(void)
// {
// 	t_dict	*dict;

// 	dict = parse_file("numbers.dict");
// }
