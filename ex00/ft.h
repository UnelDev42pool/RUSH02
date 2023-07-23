/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:22:51 by deydoux           #+#    #+#             */
/*   Updated: 2023/07/23 14:14:24 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

typedef struct s_dict
{
	long long	value;
	char		*str;
}	t_dict;

t_dict		*parse_dict(char *filename);
void		ft_putstr(char *str);
long long	ft_atoi(char *str);
char		*ft_strjoin(int size, char **strs, char *sep);
char		**ft_split(char *str, char *charset);
void		print_number(unsigned int num, t_dict *dict, int dict_len);

#endif
