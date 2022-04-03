/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 17:43:25 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 17:43:25 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*rec_itoa(int n, char *s)
{
	if (n < -9 || n > 9)
		s = rec_itoa(n / 10, s);
	n = (n % 10);
	if (n < 0)
		n = -n;
	*s++ = (n + '0');
	*s = 0;
	return (s);
}

char	*ft_itoa(int n)
{
	char	s[15];

	s[0] = '-';
	rec_itoa(n, &(s[n < 0]));
	return (ft_strdup(s));
}
