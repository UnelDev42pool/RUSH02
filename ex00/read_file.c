/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:17:25 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 15:14:40 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	file_len(char *filename)
{
	int		file;
	int		len;
	int		result;
	char	str[1];

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
