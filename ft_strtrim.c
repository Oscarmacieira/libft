/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:42:50 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 22:38:02 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_charset(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_get_start(const char *s, const char *set)
{
	size_t	i;

	i = 0;
	while (ft_is_charset(s[i], set))
		i++;
	return (i);
}

static int	ft_get_end(const char *s, const char *set)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0 && ft_is_charset(s[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*new;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	i = 0;
	if (start > end)
		return (ft_strdup(""));
	else
	{
		new = malloc(sizeof(char) * (end - start + 1));
		if (!new)
			return (NULL);
		while (start < end)
			new[i++] = s1[start++];
		new[i] = '\0';
	}
	return (new);
}
