/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:03:48 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 19:03:48 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	int		size;
	int		j;
	int		i;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s) - 1)
		start = (unsigned int)ft_strlen(s);
	j = start - 1;
	size = 0;
	while (s[++j] && size < (int)len)
		size++;
	sub = malloc(size + 1);
	if (!sub)
		return (NULL);
	i = start - 1;
	j = 0;
	while (++i <= (int)start + size - 1)
	{
		sub[j] = s[i];
		j++;
	}
	sub[j] = '\0';
	return (sub);
}
