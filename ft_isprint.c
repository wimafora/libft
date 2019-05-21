/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:08:38 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/21 15:18:22 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_isprint(int i)
{
	if (i >= 32 && i <= 126)
	{
		write(1, "Is an print value\n", 17);
	}
	else
	{
		write(1, "Not an print value\n", 18);
	}
}

/*int		main(void)
{
	char alpha = '';

	printf("%c", ft_isprint(alpha));
	return (0);
}*/
