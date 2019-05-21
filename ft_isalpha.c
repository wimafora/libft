/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:55:48 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/21 14:00:01 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_isalpha(int i)
{
	if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		write(1, "Is an alphabet\n", 14);
	}
	else
	{
		write(1, "Not an alphabet\n", 15);
	}
}

/*The C library function int isalpha(int c) checks if the passed character is alphabetic*/

/*int		main(void)
{
	char alpha = '6';

	printf("%c", ft_isalpha(alpha));
	return (0);
}*/
