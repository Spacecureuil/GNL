/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaury <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 16:10:19 by pmaury            #+#    #+#             */
/*   Updated: 2021/05/24 17:01:28 by pmaury           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "get_next_line.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)src;
	temp2 = (unsigned char *)dest;
	while (n > 0)
	{
		*temp2++ = *temp1++;
		n--;
	}
	return (dest);
}

int		ft_strnlen(char *s)
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