/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:33:42 by wimafora          #+#    #+#             */
/*   Updated: 2019/06/06 10:29:01 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t index;

	index = 0;
	while (src[index] != '\0' && index < len)
	{
		dst[index] = src[index];
		++index;
	}
	while (index < len)
	{
		dst[index] = '\0';
		index++;
	}
	return (dst);
}
