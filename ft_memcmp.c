/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:49:09 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 18:49:09 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				count;
	unsigned char	*s1c;
	unsigned char	*s2c;

	count = -1;
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	while (++count < (int)n)
	{
		if (s1c[count] != s2c[count])
			return (s1c[count] - s2c[count]);
	}
	return (0);
}
