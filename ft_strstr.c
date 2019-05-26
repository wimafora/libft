/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:26:11 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/26 16:28:18 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int k;
	unsigned int i;

	if (!*fnd)
		return ((char*)str);
	k = 0;
	while (str[k] != '\0')
	{
		if (str[k] == fnd[0])
		{
			i = 1;
			while (fnd[i] != '\0' && str[k + i] == fnd[i])
				i++;
			if (fnd[i] == '\0')
				return ((char*)&str[k]);
		}
		k++;
	}
	return (0);
}

