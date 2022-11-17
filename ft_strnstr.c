/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:07:24 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/14 00:16:22 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	size;

	i = -1;
	j = 0;
	size = ft_strlen(needle);
	while (++i < len && j < size && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len && haystack[i + j])
			j++;
	}
	if (size == 0)
		return ((char *)haystack);
	if (j == size)
		return ((char *)haystack + i - 1);
	return (NULL);
}