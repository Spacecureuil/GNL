/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 10:45:22 by pmaury            #+#    #+#             */
/*   Updated: 2021/06/01 11:35:23 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "get_next_line_bonus.h"

int	get_next_line(int fd, char **line)
{
	static char	buff[64][BUFFER_SIZE + 1];
	int			i;
	int			ret;

	if (fd < 0 || fd >= 64 || BUFFER_SIZE < 1 || read(fd, buff[fd], 0) < 0
		|| !line)
		return (-1);
	*line = NULL;
	while (42)
	{
		i = ft_strnlen(buff[fd]);
		*line = ft_strnjoin(*line, buff[fd], i);
		ft_realign(buff[fd], i + 1);
		if (!buff[fd][0])
		{
			ret = read(fd, buff[fd], BUFFER_SIZE);
			if (ret < 1 && !**line)
				return (ret);
		}
		else
			return (1);
	}
}
