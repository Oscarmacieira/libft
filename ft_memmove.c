/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:07:24 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 01:00:14 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	char	*last_d;
	char	*last_s;

	d = (char *)dst;
	s = (char *)src;
	if (d < s)
		while (len--)
			*d++ = *s++;
	else
	{
		last_s = s + (len-1);
		last_d = d + (len-1);
		while (len--)
		*last_d-- = *last_s--;
	}
	return (dst);
}
