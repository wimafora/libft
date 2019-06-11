/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:19:15 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/11 14:57:27 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_words(char const *s, char c)
{
	size_t	i;
	int		nb_words;
	int		new_word;

	i = 0;
	nb_words = 0;
	new_word = 1;
	while (s[i])
	{
		if (new_word && s[i] != c)
		{
			nb_words++;
			new_word = 0;
		}
		if (s[i] == c)
			new_word = 1;
		i++;
	}
	return (nb_words);
}

static char	*get_next_word(char const *s, char c, size_t *start)
{
	size_t	l1;

	while (s[*start] == c)
		*start += 1;
	l1 = *start;
	while (s[*start])
	{
		if (s[*start] == c)
			break ;
		*start += 1;
	}
	return (ft_strsub(s, l1, *start - l1));
}

char		**ft_strsplit(char const *s, char c)
{
	int		nb_words;
	char	**split;
	size_t	i;
	size_t	start;

	if (!s)
		return (NULL);
	nb_words = get_nb_words(s, c);
	split = (char**)malloc(sizeof(char*) * (nb_words + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	start = 0;
	while (nb_words--)
	{
		split[i] = get_next_word(s, c, &start);
		i++;
	}
	split[i] = NULL;
	return (split);
}
