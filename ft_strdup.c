/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 12:08:49 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/22 12:13:38 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	 *ft_strdup(const char *src)
{
	char *new;
	int i;
	int size;

	size = 0;
	while (src[size])
		size++;
	if (!(new = melloc(sizeof(char) * (size + 1))))
		return(NULL);
	i = 0;
	while (src[i])
	{
		new [i] = src [i];
		i++;
	}
	new [i] = '\0';
	return (new);
}
