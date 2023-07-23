/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deydoux <deydoux@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 15:09:14 by deydoux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define FT_H

typedef struct s_dict
{
	long long	value;
	char		*str;
}	t_dict;

void		ft_putstr(char *str);
long long	ft_atoi(char *str);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char *str, char *charset);

char		*read_file(char *filename);
t_dict		*parse_dict(char *filename, int *size);
void		print_number(long long num, t_dict *dict, int dict_len);

#endif
