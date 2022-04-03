/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aneves-f <aneves-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 18:52:51 by aneves-f          #+#    #+#             */
/*   Updated: 2022/03/07 18:52:51 by aneves-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	arr_size(const char *s, char c)
{
	size_t	i;
	size_t	sub_count;
	size_t	len;

	i = 1;
	len = ft_strlen(s) - 1;
	sub_count = 0;
	while (s[i])
	{
		if ((s[i] == c && s[i - 1] != c) || (i == len && s[i] != c))
			sub_count++;
		i++;
	}
	return (sub_count + 1);
}

char	**checker(const char *s, char ***split, char c)
{
	if (!s)
		return (NULL);
	*split = malloc(sizeof(char *) * arr_size(s, c));
	if (!*split)
		return (NULL);
	return (*split);
}

void	inicio(size_t *j, size_t *i, size_t *len)
{
	*j = 0;
	*i = -1;
	*len = 0;
}

char	**ft_split(const char *s, char c)
{
	char	**split;
	size_t	j;
	size_t	i;
	size_t	len;

	inicio(&j, &i, &len);
	split = checker(s, &split, c);
	if (!split)
		return (NULL);
	while (s[++i])
	{
		if (s[i] != c)
			len++;
		if ((len > 0 && s[i] == c) || (s[i + 1] == '\0' && len > 0))
		{
			if (s[i] == c)
				split[j] = ft_substr(s, i - len, len);
			else if (s[i + 1] == '\0')
				split[j] = ft_substr(s, i - len + 1, len);
			j++;
			len = 0;
		}
	}
	split[j] = NULL;
	return (split);
}
