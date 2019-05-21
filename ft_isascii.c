/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:32:40 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/21 14:44:51 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int 	ft_isascii(int i)
{
	if (i >= 0 && i <= 127 )
	{
		write(1, "Is an ascii value\n", 19);
	}
	else
	{
		write(1, "Not an ascii value\n", 20);
	}
}

/*int		main(void)
{
	char alpha = '\\';

	printf("%c", ft_isascii(alpha));
	return(0);
}*/
