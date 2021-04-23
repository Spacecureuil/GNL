/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:19:40 by pmaury            #+#    #+#             */
/*   Updated: 2021/04/23 17:20:00 by pmaury           ###   ########.fr       */
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
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_strnlen(char *s);

#endif
