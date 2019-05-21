/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wimafora <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:14:35 by wimafora          #+#    #+#             */
/*   Updated: 2019/05/21 14:29:42 by wimafora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int		ft_isalnum(int i)
{
	if ((i >= 48 && i <= 57) || (i >= 65 && i <= 90) || (i >= 97 && i <= 122))
	{
		write(1, "Is an alphanumeric\n", 18);
	}
	else
	{
		write(1, "Not an alphanumeric\n", 19);
	}
}

/*int		main(void)
{
	char alpha = '6';

	printf("%c", ft_isalnum(alpha));
	return (0);
}*/
