/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 09:18:43 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 21:37:26 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new;
	size_t	mem_size;

	mem_size = count * size;
	if (((mem_size / count) != size))
		return (NULL);
	new = malloc(mem_size);
	if (!new)
		return (NULL);
	ft_bzero(new, mem_size);
	return (new);

}