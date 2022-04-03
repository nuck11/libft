/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:50:19 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 18:50:19 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char		*dstc;
	const unsigned char	*srcc;
	int					count;

	dstc = (unsigned char *)dst;
	srcc = (unsigned char *)src;
	count = -1;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		count = (int)n;
		while (--count >= 0)
		dstc[count] = srcc[count];
	}
	else
	{
		while (++count < (int)n)
		dstc[count] = srcc[count];
	}
	return ((void *)dstc);
}
