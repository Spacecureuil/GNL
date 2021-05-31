/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 15:01:20 by pmaury            #+#    #+#             */
/*   Updated: 2021/05/25 11:14:46 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	static char	buff[BUFFER_SIZE + 1];
	int			i;
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, buff, 0) < 0 || line == NULL)
		return (-1);
	*line = NULL;
	while (42)
	{
		i = ft_strnlen(buff);
		if (i == BUFFER_SIZE || buff[i] != '\n')
		{
			*line = ft_strnjoin(*line, buff, i);
			ft_realign(buff, i + 1);
			ret = read(fd, buff, BUFFER_SIZE);
			if (ret < 1)
				return (ret);
		}
		else
		{
			*line = ft_strnjoin(*line, buff, i);
			ft_realign(buff, i + 1);
			return (1);
		}
	}
}
