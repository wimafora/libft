/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:09:27 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/21 12:13:42 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_isalpha(int i)
{
	if (i >= 48 && i <= 57)
	{
		write(1, "Is an digit\n", 11);
	}
	else
	{
		write(1, "Not an digit\n", 12);
	}
}

/*int		main(void)
{
	char alpha = 'k';

	printf("%c", ft_isalpha(alpha));
	return (0);
}*/
