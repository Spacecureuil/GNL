/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:19:40 by pmaury            #+#    #+#             */
/*   Updated: 2021/05/25 11:06:29 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

#include <stdlib.h>

int		get_next_line(int fd, char **line);
char	*ft_strnjoin(char *str1, char *str2, int n);
void 	ft_realign(char *buff, int n);
int		ft_strnlen(char *s);

#endif
