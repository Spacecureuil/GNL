/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 17:20:24 by pmaury            #+#    #+#             */
/*   Updated: 2021/05/25 11:14:34 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line_bonus.h"

void	ft_realign(char *buff, int n)
{
	int	i;
	
	i = 0;
	while (n + i < BUFFER_SIZE)
	{
		buff[i] = buff[n + i];
		i++;
	}
	while (i < BUFFER_SIZE)
		buff[i++] = '\0';
}

int	ft_strnlen(char *s)
{
	int		i;

	i = 0;
	while (i < BUFFER_SIZE && s[i] && s[i] != '\n')
		i++;
	return (i);
}

char	*ft_strnjoin(char *str1, char *str2, int n)
{
	int		i;
	char	*dest;

	i = 0;
	while (str1 && str1[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1 + n));
	if (!dest)
		return (0);
	dest[i + n] = '\0';
	while (n--)
		dest[i + n] = str2[n];
	while (i--)
		dest[i] = str1[i];
	free(str1);
	return (dest);
}
