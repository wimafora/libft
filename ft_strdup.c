/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:02:08 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/06 14:06:19 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int				org_size;
	static char		*dup;
	char			*dup_offset;

	org_size = strlen(s1);
	dup = (char *)malloc(sizeof(char) * org_size + 1);

	if(dup == NULL)
		return ((char *)NULL);
	dup_offset = dup;
	while (*s1)
	{
		*dup_offset = *s1;
		dup_offset++;
		s1++;
	}
	*dup_offset = '\0';
	return (dup);
}
