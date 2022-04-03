/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:56:52 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 18:56:52 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy;
	int		count;

	count = 0;
	copy = (char *)malloc(ft_strlen(s) + 1);
	if (!s || !copy)
		return (NULL);
	while (s[count])
	{
		copy[count] = s[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}
