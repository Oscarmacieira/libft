/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:42:50 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 22:18:38 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_between(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i] && i < start)
		i++;
	while (s[i++] && j < len)
	{
		j++;
	}
	return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*new;

	if (!s)
		return (NULL);
	size = ft_len_between(s, start, len);
	new = malloc((size + 1) * sizeof(char));
	if (!new)
		return (NULL);
	i = 0;
	while (s[start + i] && i < size)
	{
		new[i] = s[start + i];
		i++;
	}
	new[i] = '\0';
	return (new);
}