/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 15:59:16 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# define FT_H

typedef struct s_dict
{
	unsigned long long	value;
	char				*str;
}	t_dict;

void				ft_putstr(char *str);
long long			ft_atoi(char *str);
char				*ft_strjoin(int size, char **strs, char *sep);
char				**ft_split(char *str, char *charset);
unsigned long long	ft_iterative_power(unsigned long long nb,
						unsigned long long power);
char				*read_file(char *filename);
t_dict				*parse_dict(char *filename, int *size);
void				print_number(unsigned long long num, t_dict *dict,
						int dict_len);

#endif
