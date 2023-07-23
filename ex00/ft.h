/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 16:41:10 by edi-iori         ###   ########lyon.fr   */
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
	char				*str;
}	t_dict;

void		ft_putstr(char *str);
long long	ft_atoi(char *str);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char *str, char *charset);

void		*free_2d(char **ptrs);
char		**read_lines(char *filename);
t_dict		*parse_dict(char *filename, int *size);

long long	ft_power(long long nb, long long power);
void		print_number(long long num, t_dict *dict, int dict_len);

#endif
