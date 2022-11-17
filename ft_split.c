/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omacieir <omacieir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:42:50 by omacieir          #+#    #+#             */
/*   Updated: 2022/11/15 09:07:12 by omacieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nb_words(const char *str, char c)
{
	int	nb;
	int	flag;
	int	i;

	i = -1;
	nb = 0;
	flag = 0;
	while (str[++i])
	{
		if (str[i] != c && flag == 0)
		{
			flag = 1;
			nb++;
		}
		else if (str[i] == c)
			flag = 0;
	}
	return (nb);
}

static char	*ft_new_word(const char *str, int start, int end)
{
	char	*new;
	int		i;

	i = 0;
	new = malloc((end - start) * sizeof(char));
	while (start < end)
		new[i++] = str[start++];
	new[i] = '\0';
	return (new);
}

char		**ft_split(char const *s, char c)
{
	size_t		i;
	size_t		j;
	int		position;
	char	**res;

	if (!s || !(res = malloc((ft_nb_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	position= -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && position< 0)
			position= i;
		else if ((s[i] == c || i == ft_strlen(s)) && position >= 0)
		{
			res[j++] = ft_new_word(s, position, i);
			position= -1;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}