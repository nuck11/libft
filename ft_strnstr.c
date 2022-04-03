/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 19:02:00 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 19:02:00 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!str && !to_find)
		return (NULL);
	if (!to_find[0])
		return ((char *)str);
	while (*(str + j) && j < len)
	{
		i = 0;
		while (*(str + j + i) && *(to_find + i) && j + i < len
			&& *(str + j + i) == *(to_find + i))
			i++;
		if (!*(to_find + i))
			return ((char *)(str + j));
		j++;
	}
	return (NULL);
}
