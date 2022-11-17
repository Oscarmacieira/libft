/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 10:07:24 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 21:54:56 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int i)
{
	int		j;
	char	c;

	j = -1;
	c = (char)i;
	while (s[++j] != c)
	{
		if (s[j] == '\0')
			return (NULL);
	}
	return ((char *)(s + j));
}