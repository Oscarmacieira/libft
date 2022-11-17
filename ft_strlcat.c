/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:42:50 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/14 07:36:02 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t a;
	size_t b;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	a = ft_strlen(dst);
	b = 0;
	while (src[b] != '\0' && a + 1 < dstsize)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[b]));
}