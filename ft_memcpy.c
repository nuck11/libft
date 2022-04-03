/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:50:06 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 18:50:14 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstc;
	const unsigned char	*srcc;
	size_t				count;

	if (!dst && !src)
		return (NULL);
	count = 0;
	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	while (count < n)
	{
		dstc[count] = srcc[count];
		count++;
	}
	return (dst);
}
