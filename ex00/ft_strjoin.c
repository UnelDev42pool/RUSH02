/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:26:49 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 14:24:04 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	end;

	i = 0;
	end = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[end + i] = src[i];
		i++;
	}
	dest[end + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = ft_strlen(sep) * size;
	while (i < size)
		len += ft_strlen(strs[i++]);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[0] = 0;
	i = 0;
	while (i < size)
	{
		if (i != 0)
			ft_strcat(str, sep);
		ft_strcat(str, strs[i++]);
	}
	str[len] = 0;
	return (str);
}
